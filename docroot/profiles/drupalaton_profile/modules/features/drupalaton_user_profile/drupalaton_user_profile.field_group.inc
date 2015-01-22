<?php
/**
 * @file
 * drupalaton_user_profile.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function drupalaton_user_profile_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_basic|user|user|form';
  $field_group->group_name = 'group_profile_basic';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_profile_about_me',
      1 => 'field_profile_country',
      2 => 'field_profile_first_name',
      3 => 'field_profile_job_title',
      4 => 'field_profile_last_name',
      5 => 'field_profile_organization',
      6 => 'field_profile_picture',
      7 => 'field_profile_gender',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Basic Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-profile-basic field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_profile_basic|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_event|user|user|form';
  $field_group->group_name = 'group_profile_event';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event specific settings',
    'weight' => '2',
    'children' => array(
      0 => 'field_profile_job_speed_dating',
      1 => 'field_profile_tshirt',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Event specific settings',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-profile-event field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_profile_event|user|user|form'] = $field_group;

  return $export;
}
