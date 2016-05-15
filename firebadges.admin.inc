<?php
/**
 * @file Administration include.
 */

/**
 * Provide admin settings.
 */
function firebadges_admin_settings($form_state) {
  return system_settings_form(array(
    'firebadges_toggle' => array(
      '#type' => 'checkbox',
      '#title' => 'Enable',
      '#default_value' => variable_get('firebadges_toggle', FALSE),
    ),
    'firebadges_public_key' => array(
      '#type' => 'textfield',
      '#title' => t('Firebase Public Key'),
      '#default_value' => variable_get('firebadges_public_key', ''),
      '#required' => TRUE,
      '#size' => 15,
    ),
    'firebadges_private_key' => array(
      '#type' => 'textfield',
      '#title' => t('Firebase Private Key'),
      '#default_value' => variable_get('firebadges_private_key', ''),
      '#required' => TRUE,
      '#size' => 15,
    ),
    'firebadges_roles' => array(
      '#type' => 'checkboxes',
      '#title' => t('Include roles'),
      '#description' => t('Roles to enable tracking and earning badges.'),
      '#options' => user_roles(TRUE),
      '#multiple' => TRUE,
      '#default_value' => variable_get('firebadges_roles', ''),
    )
  ));
}
