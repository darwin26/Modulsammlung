<?php

// this modul input is an example for use easy html form

// base ID
$id = 1;

// html form
$form = <<<EOT
    <fieldset class="form-horizontal ">
        <legend>Media</legend>
        <div class="form-group">
            <div class="col-sm-2 control-label"><label>Media</label></div>
            <div class="col-sm-10">
                REX_MEDIA[id="1" widget="1"]
            </div>
        </div>
        <div class="form-group">
            <div class="col-sm-2 control-label"><label>Media list</label></div>
            <div class="col-sm-10">
                REX_MEDIALIST[id="1" widget="1"]
            </div>
        </div>
    </fieldset>
EOT;

// parse form
echo MBlock::show($id, $form);

?>
