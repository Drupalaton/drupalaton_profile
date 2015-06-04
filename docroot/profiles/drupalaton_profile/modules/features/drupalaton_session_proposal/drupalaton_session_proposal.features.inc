<?php
/**
 * @file
 * drupalaton_session_proposal.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalaton_session_proposal_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function drupalaton_session_proposal_default_entityform_type() {
  $items = array();
  $items['session_proposal'] = entity_import('entityform_type', '{
    "type" : "session_proposal",
    "label" : "Session proposal",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submit_button_text" : "send",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "filtered_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "26" : 0, "31" : 0, "11" : 0, "21" : 0, "16" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EThis will be the biggest camp yet, so we need you! This year we leave DrupalCamp traditions behind again and turn the weekend into learning and understanding more of Drupal 8, coding, theming and Drupal business by having 90 minutes and half-day long workshops and trainings. Submit your proposal below and the camp organisers will pick those topics which benefit and excite attendees from Drupal community, from all topics of interest and skill levels. We are aiming for a balanced set of sessions to engage various parts of the community and are doing our best to give visibility to as many presenters as possible.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EProposal submission deadline: midnight of July 10th 2015.\\u003C\\/p\\u003E\\r\\n",
        "format" : "filtered_html"
      }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/session-proposal",
        "alias" : "session-proposal",
        "language" : "und"
      }
    }
  }');
  return $items;
}
