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
      0 => 'field_session_speaker_image',
      1 => 'field_session_speaker_nick',
      2 => 'field_session_firstname',
      3 => 'field_session_lastname',
      4 => 'field_profile_job_title',
      5 => 'field_profile_organization',
      6 => 'field_session_co_presenters',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_speaker_name|node|session|default';
  $field_group->group_name = 'group_speaker_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Speaker name',
    'weight' => '4',
    'children' => array(
      0 => 'field_session_speaker_nick',
      1 => 'field_session_co_presenters',
      2 => 'field_session_firstname',
      3 => 'field_session_lastname',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Speaker name',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-speaker-name field-group-div speaker-name',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_speaker_name|node|session|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_speaker_name|node|session|schedule';
  $field_group->group_name = 'group_speaker_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'schedule';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Speaker name',
    'weight' => '5',
    'children' => array(
      0 => 'field_session_speaker_nick',
      1 => 'field_session_co_presenters',
      2 => 'field_session_firstname',
      3 => 'field_session_lastname',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Speaker name',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-speaker-name field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_speaker_name|node|session|schedule'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_speaker_name|node|session|teaser';
  $field_group->group_name = 'group_speaker_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'speaker name',
    'weight' => '0',
    'children' => array(
      0 => 'field_session_firstname',
      1 => 'field_session_lastname',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'speaker name',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-speaker-name field-group-div speaker-name',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_speaker_name|node|session|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_track_info|node|session|default';
  $field_group->group_name = 'group_track_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Track info',
    'weight' => '0',
    'children' => array(
      0 => 'field_session_length',
      1 => 'field_session_skill',
      2 => 'field_session_track_topic',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Track info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-track-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_track_info|node|session|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_track_info|node|session|schedule';
  $field_group->group_name = 'group_track_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'schedule';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Track info',
    'weight' => '1',
    'children' => array(
      0 => 'field_session_length',
      1 => 'field_session_skill',
      2 => 'field_session_track_topic',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Track info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-track-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_track_info|node|session|schedule'] = $field_group;

  return $export;
}
