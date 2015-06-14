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
  $ds_fieldsetting->id = 'node|session|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'session';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_session_speaker_nick' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => ' (',
          'suffix' => ')',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => TRUE,
          'fi-first-last' => TRUE,
        ),
      ),
    ),
    'field_session_co_presenters' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => ', ',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => TRUE,
          'fi-first-last' => TRUE,
        ),
      ),
    ),
    'field_session_firstname' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => 'by ',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => TRUE,
          'fi-first-last' => TRUE,
        ),
      ),
    ),
    'field_session_lastname' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => ' ',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => TRUE,
          'fi-first-last' => TRUE,
        ),
      ),
    ),
    'field_session_length' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => ' (',
          'suffix' => ')',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => TRUE,
          'fi-first-last' => TRUE,
        ),
      ),
    ),
    'field_session_skill' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => ', ',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => TRUE,
          'fi-first-last' => TRUE,
        ),
      ),
    ),
    'field_session_track_topic' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => TRUE,
          'fi-first-last' => TRUE,
        ),
      ),
    ),
  );
  $export['node|session|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|session|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'session';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'View details',
        'wrapper' => 'div',
        'class' => 'about-speaker tab-button',
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
        6 => 'node_link',
      ),
    ),
    'fields' => array(
      'group_speaker_name' => 'ds_content',
      'field_session_firstname' => 'ds_content',
      'field_session_speaker_nick' => 'ds_content',
      'field_session_lastname' => 'ds_content',
      'field_profile_job_title' => 'ds_content',
      'field_session_speaker_image' => 'ds_content',
      'node_link' => 'ds_content',
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
