<?php
/**
 * @file
 * drupalaton_session_proposal.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drupalaton_session_proposal_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-session_proposal-field_session_bio'
  $field_instances['entityform-session_proposal-field_session_bio'] = array(
    'bundle' => 'session_proposal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_session_bio',
    'label' => 'Your professional bio',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'entityform-session_proposal-field_session_co_presenters'
  $field_instances['entityform-session_proposal-field_session_co_presenters'] = array(
    'bundle' => 'session_proposal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Names of other individuals who will be presenting',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_session_co_presenters',
    'label' => 'Co-presenters (optional)',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'entityform-session_proposal-field_session_dorg'
  $field_instances['entityform-session_proposal-field_session_dorg'] = array(
    'bundle' => 'session_proposal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'example: http://drupal.org/user/12345',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_session_dorg',
    'label' => 'Drupal.org profile (optional)',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-session_proposal-field_session_email'
  $field_instances['entityform-session_proposal-field_session_email'] = array(
    'bundle' => 'session_proposal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_session_email',
    'label' => 'Your email address',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-session_proposal-field_session_employer'
  $field_instances['entityform-session_proposal-field_session_employer'] = array(
    'bundle' => 'session_proposal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The name of the company you are employed by if any',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_session_employer',
    'label' => 'Employer name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-session_proposal-field_session_full_name'
  $field_instances['entityform-session_proposal-field_session_full_name'] = array(
    'bundle' => 'session_proposal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_session_full_name',
    'label' => 'Your full name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'entityform-session_proposal-field_session_job'
  $field_instances['entityform-session_proposal-field_session_job'] = array(
    'bundle' => 'session_proposal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_session_job',
    'label' => 'Job description, or title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-session_proposal-field_session_length'
  $field_instances['entityform-session_proposal-field_session_length'] = array(
    'bundle' => 'session_proposal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Workshops are 3 hours long, trainings are 6 hours with a lunchbreak. This means coworking with the guidance of the presenter(s) - every stakeholder will work on their own computer.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_session_length',
    'label' => 'Session length',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'entityform-session_proposal-field_session_past'
  $field_instances['entityform-session_proposal-field_session_past'] = array(
    'bundle' => 'session_proposal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Have you given this talk before? Have you presented at other events? If you have links to slides or videos, please include them.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_session_past',
    'label' => 'Past speaking experience (optional)',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'entityform-session_proposal-field_session_phone'
  $field_instances['entityform-session_proposal-field_session_phone'] = array(
    'bundle' => 'session_proposal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please add any international dial codes',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_session_phone',
    'label' => 'Your phone number',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'entityform-session_proposal-field_session_skill'
  $field_instances['entityform-session_proposal-field_session_skill'] = array(
    'bundle' => 'session_proposal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What is the experience level of your target audience?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_session_skill',
    'label' => 'Skill level',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'entityform-session_proposal-field_session_summary'
  $field_instances['entityform-session_proposal-field_session_summary'] = array(
    'bundle' => 'session_proposal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Think "tweetable", around 120 characters',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_session_summary',
    'label' => 'Short session summary',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'entityform-session_proposal-field_session_summary_full'
  $field_instances['entityform-session_proposal-field_session_summary_full'] = array(
    'bundle' => 'session_proposal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Full description, e.g. target audience, what questions you will answer, and what info attendees will walk away with.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_session_summary_full',
    'label' => 'Full session summary',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'entityform-session_proposal-field_session_title'
  $field_instances['entityform-session_proposal-field_session_title'] = array(
    'bundle' => 'session_proposal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_session_title',
    'label' => 'Session title',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-session_proposal-field_session_track_topic'
  $field_instances['entityform-session_proposal-field_session_track_topic'] = array(
    'bundle' => 'session_proposal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_session_track_topic',
    'label' => 'Track / Topic',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'entityform-session_proposal-field_session_twitter'
  $field_instances['entityform-session_proposal-field_session_twitter'] = array(
    'bundle' => 'session_proposal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_session_twitter',
    'label' => 'Twitter (optional)',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Co-presenters (optional)');
  t('Drupal.org profile (optional)');
  t('Employer name');
  t('Full description, e.g. target audience, what questions you will answer, and what info attendees will walk away with.');
  t('Full session summary');
  t('Have you given this talk before? Have you presented at other events? If you have links to slides or videos, please include them.');
  t('Job description, or title');
  t('Names of other individuals who will be presenting');
  t('Past speaking experience (optional)');
  t('Please add any international dial codes');
  t('Session length');
  t('Session title');
  t('Short session summary');
  t('Skill level');
  t('The name of the company you are employed by if any');
  t('Think "tweetable", around 120 characters');
  t('Track / Topic');
  t('Twitter (optional)');
  t('What is the experience level of your target audience?');
  t('Workshops are 3 hours long, trainings are 6 hours with a lunchbreak. This means coworking with the guidance of the presenter(s) - every stakeholder will work on their own computer.');
  t('Your email address');
  t('Your full name');
  t('Your phone number');
  t('Your professional bio');
  t('example: http://drupal.org/user/12345');

  return $field_instances;
}
