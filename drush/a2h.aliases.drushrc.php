<?php

$aliases['doesb'] = array(
  'os' => 'Linux',
  'remote-host' => 'doesb.org',
  'remote-user' => 'doesborg',
  'ssh-options' => '-p 7822',
  'path-aliases' => array(
    '%drush-script' => '/usr/local/bin/drush',
  ),
);

$aliases['live'] = array(
  'uri' => 'veldeke-krink-venlo.nl',
  'root' => '/home/doesborg/public_html/veldeke/docroot',
) + $aliases['doesb'];
