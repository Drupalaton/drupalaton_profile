<?php
/**
 * @file
 * drupalaton_session_proposal.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function drupalaton_session_proposal_default_rules_configuration() {
  $items = array();
  $items['rules_create_user_and_session_node'] = entity_import('rules_config', '{ "rules_create_user_and_session_node" : {
      "LABEL" : "Create user and session node",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_update" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "entityform" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_session_accept_proposal" } },
        { "data_is" : { "data" : [ "entity:field-session-accept-proposal" ], "value" : "1" } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_session_email" } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_session_firstname" } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_session_lastname" } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_session_phone" } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_session_dorg" } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_session_organization" } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_session_job" } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_session_bio" } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_session_twitter" } },
        { "NOT data_is_empty" : { "data" : [ "entity:field-session-firstname" ] } },
        { "NOT data_is_empty" : { "data" : [ "entity:field-session-lastname" ] } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_session_title" } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_session_co_presenters" } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_session_track_topic" } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_session_skill" } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_session_length" } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_session_summary" } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_session_summary_full" } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_session_past" } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "user",
              "param_field_profile_first_name" : [ "entity:field-session-firstname" ],
              "param_field_profile_last_name" : [ "entity:field-session-lastname" ],
              "param_name" : [ "entity:field-session-email" ],
              "param_mail" : [ "entity:field-session-email" ]
            },
            "PROVIDE" : { "entity_created" : { "user_created" : "Created user" } }
          }
        },
        { "data_set" : {
            "data" : [ "user-created:field-profile-job-title" ],
            "value" : [ "entity:field-session-job" ]
          }
        },
        { "data_set" : {
            "data" : [ "user-created:field-profile-organization" ],
            "value" : [ "entity:field-session-organization" ]
          }
        },
        { "data_set" : {
            "data" : [ "user-created:field-profile-phone" ],
            "value" : [ "entity:field-session-phone" ]
          }
        },
        { "data_set" : {
            "data" : [ "user-created:field-profile-about-me" ],
            "value" : [ "entity:field-session-bio" ]
          }
        },
        { "data_set" : {
            "data" : [ "user-created:field-profile-dorg" ],
            "value" : [ "entity:field-session-dorg" ]
          }
        },
        { "data_set" : {
            "data" : [ "user-created:field-profile-twitter" ],
            "value" : [ "entity:field-session-twitter" ]
          }
        },
        { "data_set" : { "data" : [ "user-created:status" ], "value" : "0" } },
        { "data_set" : {
            "data" : [ "user-created:name" ],
            "value" : [ "entity:field-session-email" ]
          }
        },
        { "entity_save" : { "data" : [ "user-created" ], "immediate" : "1" } },
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "session",
              "param_title" : [ "entity:field-session-title" ],
              "param_author" : [ "user-created" ]
            },
            "PROVIDE" : { "entity_created" : { "node_created" : "Created node" } }
          }
        },
        { "data_set" : {
            "data" : [ "node-created:author:name" ],
            "value" : [ "user-created:name" ]
          }
        },
        { "data_set" : {
            "data" : [ "node-created:field-session-firstname" ],
            "value" : [ "entity:field-session-firstname" ]
          }
        },
        { "data_set" : {
            "data" : [ "node-created:field-session-lastname" ],
            "value" : [ "entity:field-session-lastname" ]
          }
        },
        { "data_set" : {
            "data" : [ "node-created:field-profile-job-title" ],
            "value" : [ "entity:field-session-job" ]
          }
        },
        { "data_set" : {
            "data" : [ "node-created:field-profile-organization" ],
            "value" : [ "entity:field-session-organization" ]
          }
        },
        { "data_set" : {
            "data" : [ "node-created:field-session-co-presenters" ],
            "value" : [ "entity:field-session-co-presenters" ]
          }
        },
        { "data_set" : {
            "data" : [ "node-created:field-session-title" ],
            "value" : [ "entity:field-session-title" ]
          }
        },
        { "data_set" : {
            "data" : [ "node-created:field-session-track-topic" ],
            "value" : [ "entity:field-session-track-topic" ]
          }
        },
        { "data_set" : {
            "data" : [ "node-created:field-session-skill" ],
            "value" : [ "entity:field-session-skill" ]
          }
        },
        { "data_set" : {
            "data" : [ "node-created:field-session-length" ],
            "value" : [ "entity:field-session-length" ]
          }
        },
        { "data_set" : {
            "data" : [ "node-created:field-session-summary" ],
            "value" : [ "entity:field-session-summary" ]
          }
        },
        { "data_set" : {
            "data" : [ "node-created:field-session-summary-full" ],
            "value" : [ "entity:field-session-summary-full" ]
          }
        },
        { "data_set" : {
            "data" : [ "node-created:field-session-past" ],
            "value" : [ "entity:field-session-past" ]
          }
        },
        { "entity_save" : { "data" : [ "node-created" ], "immediate" : "1" } }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  return $items;
}
