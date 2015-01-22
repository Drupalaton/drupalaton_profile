<?php 

function live_oneday(){  
  $html = '
  <div id="live" class="oneday">
    <div class="inner">
      <a href="/broadcast/workshop">
        <div class="icon"></div>
        <div class="text">
            <div class="day">
              FRIDAY
            </div>
            <div class="dayname">
              WORKSHOP DAY
            </div>
        </div>  
      </a>
    </div>  
  </div>';
  return $html;
}

function live_twoday(){  
  $html = '<div id="live" class="twoday">
    <div class="inner">
      <a href="/broadcast/session-a">
        <div class="icon"></div>
        <div class="text">
          <div class="day">
            SATURDAY
          </div>
          <div class="dayname">
            SESSIONS A
          </div>
        </div>  
      </a>
      <a href="/broadcast/session-b">
        <div class="icon"></div>
        <div class="text">
          <div class="day">
            SATURDAY
          </div>
          <div class="dayname">
            SESSIONS B
          </div>
        </div>  
      </a>
    </div>  
  </div>';	
  return $html;
}

/**
 * Implements hook_preprocess_html().
 */
function drupalaton_theme_preprocess_html(&$variables) {
  $variables['path_to_theme'] = url(drupal_get_path('theme', 'drupalaton_theme', array('absolute' => TRUE)));
}

/**
 * Implements hook_preprocess_page().
 */
function drupalaton_theme_preprocess_page(&$variables) {
  $variables['sponsor_diamond'] = views_embed_view('sponsors', 'block_1');
  $variables['sponsor_diamond_header'] = views_embed_view('sponsors', 'sponsor_diamond_header');
  $variables['sponsor_gold'] = views_embed_view('sponsors', 'block_2');
}