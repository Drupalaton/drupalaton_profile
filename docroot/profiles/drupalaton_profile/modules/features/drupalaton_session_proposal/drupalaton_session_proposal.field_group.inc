<?php
/**
 * @file
 * drupalaton_session_proposal.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function drupalaton_session_proposal_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|entityform|session_proposal|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'session_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact information',
    'weight' => '0',
    'children' => array(
      0 => 'field_session_dorg',
      1 => 'field_session_email',
      2 => 'field_session_firstname',
      3 => 'field_session_job',
      4 => 'field_session_lastname',
      5 => 'field_session_organization',
      6 => 'field_session_phone',
      7 => 'field_session_twitter',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_contact|entityform|session_proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_session|entityform|session_proposal|form';
  $field_group->group_name = 'group_session';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'session_proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Session information',
    'weight' => '10',
    'children' => array(
      0 => 'field_session_bio',
      1 => 'field_session_co_presenters',
      2 => 'field_session_length',
      3 => 'field_session_past',
      4 => 'field_session_skill',
      5 => 'field_session_summary',
      6 => 'field_session_summary_full',
      7 => 'field_session_title',
      8 => 'field_session_track_topic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_session|entityform|session_proposal|form'] = $field_group;

  return $export;
}
