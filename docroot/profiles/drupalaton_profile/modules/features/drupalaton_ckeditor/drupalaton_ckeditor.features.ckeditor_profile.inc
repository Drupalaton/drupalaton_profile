<?php
/**
 * @file
 * drupalaton_ckeditor.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function drupalaton_ckeditor_ckeditor_profile_defaults() {
  $data = array(
    'Advanced' => array(
      'name' => 'Advanced',
      'settings' => array(
        'ss' => 2,
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'toolbar' => '[
    [\'Styles\',\'Bold\',\'Italic\',\'Underline\',\'Strike\'],
    [\'NumberedList\',\'BulletedList\'],
    [\'JustifyCenter\',\'JustifyLeft\',\'JustifyRight\'],
    [\'PasteFromWord\',\'Link\',\'Unlink\',\'Image\',\'DrupalBreak\']
]',
        'expand' => 't',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'self',
        'css_path' => '/profiles/drupalaton_profile/themes/drupalaton_theme/css/ckeditor.css',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => 'config.stylesCombo_stylesSet = [
  { name : \'Headline 2 - Section title\', element : \'h2\', attributes : {class: \'section-title\'}},
  { name : \'Headline 3 - Section subtitle\', element : \'h3\', attributes : {class: \'section-subtitle\'}},
  { name : \'Simple text\', element : \'p\', attributes : {class: \'\'}},
  { name : \'Img-left\', element : \'img\', attributes : {class: \'img-left\'}},
  { name : \'Img-right\', element : \'img\', attributes : {class: \'img-right\'}}
];',
        'loadPlugins' => array(
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
        ),
      ),
      'input_formats' => array(
        'filtered_html' => 'Filtered HTML',
      ),
    ),
  );
  return $data;
}
