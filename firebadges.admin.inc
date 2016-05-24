<?php
/**
 * @file Administration include.
 */

/**
 * Provide admin settings.
 */
function firebadges_admin_settings_form($form) {
  $roles = user_roles(TRUE);

  return system_settings_form(array(
    'firebadges_toggle' => array(
      '#type' => 'checkbox',
      '#title' => t('Enable'),
      '#description' => t('Global feature toggle.'),
      '#default_value' => variable_get('firebadges_toggle', TRUE),
    ),
    'firebadges_firebase_url' => array(
      '#type' => 'textfield',
      '#title' => t('Firebase URL'),
      '#description' => t('Unique address of your Firebase app backend.'),
      '#default_value' => variable_get('firebadges_firebase_url', ''),
      '#required' => TRUE,
      '#size' => 15,
    ),
    'firebadges_roles' => array(
      '#type' => 'checkboxes',
      '#title' => t('Include roles'),
      '#description' => t('Roles to enable tracking and earning of badges.'),
      '#options' => user_roles(TRUE),
      '#multiple' => TRUE,
      '#default_value' => variable_get('firebadges_roles', array()),
    )
  ));
}
