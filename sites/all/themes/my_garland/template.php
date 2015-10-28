<?php

function my_garland_process_page(&$variables) {
  // Hook into color.module
  if (module_exists('color')) {
    _color_page_alter($variables);
  }
}
