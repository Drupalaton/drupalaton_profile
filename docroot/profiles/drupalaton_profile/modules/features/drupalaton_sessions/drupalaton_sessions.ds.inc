<?php
/**
 * @file
 * drupalaton_sessions.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function drupalaton_sessions_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|session|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'session';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'details' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_session_speaker_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_session_speaker_nick' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Nick',
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['node|session|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function drupalaton_sessions_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'details';
  $ds_field->label = 'View details';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div class="about-speaker tab-button"><a href="/schedule">View details</a></a>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['details'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function drupalaton_sessions_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|session|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'session';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_speaker_name',
        1 => 'field_session_firstname',
        2 => 'field_session_speaker_nick',
        3 => 'field_session_lastname',
        4 => 'field_profile_job_title',
        5 => 'field_session_speaker_image',
        6 => 'details',
      ),
    ),
    'fields' => array(
      'group_speaker_name' => 'ds_content',
      'field_session_firstname' => 'ds_content',
      'field_session_speaker_nick' => 'ds_content',
      'field_session_lastname' => 'ds_content',
      'field_profile_job_title' => 'ds_content',
      'field_session_speaker_image' => 'ds_content',
      'details' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|session|teaser'] = $ds_layout;

  return $export;
}
