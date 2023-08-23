/**
 * @file message_manager.h
 * @author Paulo Santos (pauloxrms@gmail.com)
 * @brief Declara as funções de comunicação entre EQMRX e EQMTX.
 * @version 0.1
 * @date 23-08-2023
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef EQ_CONTROLLER_MESSAGE_MANAGER_H
#define EQ_CONTROLLER_MESSAGE_MANAGER_H

/**
 * @brief Enumera os tipos de mensagens.
 */
typedef enum message_type {
    MESSAGE_FULL_STOP = 0,
    MESSAGE_START_TRACKING,
    MESSAGE_MOVE_AXIS,
    MESSAGE_SETTING,
} message_type_t;

/**
 * @brief Estrutura os metadados de uma mensagem de movimentação.
 */
typedef struct move_axis_metadata {

} move_axis_metadata_t;

/**
 * @brief Estrutura os metadados de uma mensagem de configuração
 */
typedef struct setting_metadata {

} setting_metadata_t;

/**
 * @brief Une os tipos de metadados.
 */
typedef union message_metadata {
    move_axis_metadata_t move_axis;
    setting_metadata_t setting;
} message_metadata_t;

/**
 * @brief Estrutura uma mensagem.
 */
typedef struct eqm_message {
    message_type_t type;
    message_metadata_t metadata;
} eqm_message_t;

/**
 * @brief Envia uma mensagem para o EQM configurado.
 *
 * @param msg Mensagem a ser enviada.
 */
void send_message(eqm_message_t msg);

#endif /* EQ_CONTROLLER_MESSAGE_MANAGER_H */