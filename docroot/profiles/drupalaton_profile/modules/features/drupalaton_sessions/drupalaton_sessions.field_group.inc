<?php
/**
 * @file
 * drupalaton_sessions.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function drupalaton_sessions_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_session_speaker|node|session|form';
  $field_group->group_name = 'group_session_speaker';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Speaker infos',
    'weight' => '1',
    'children' => array(
      0 => 'field_session_speaker_name',
      1 => 'field_session_speaker_nick',
      2 => 'field_session_speaker_title',
      3 => 'field_session_speaker_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-session-speaker field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_session_speaker|node|session|form'] = $field_group;

  return $export;
}
