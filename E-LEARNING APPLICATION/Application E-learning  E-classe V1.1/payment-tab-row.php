<?php
$content = file_get_contents('payment.json');
$payments = json_decode($content,true);
foreach($payments as $payment) : ?>
  <tr>
  <td><?=  $payment['name']?></td>
  <td><?=  $payment['payment_schedule']?></td>
  <td><?= $payment['bill_number']?></td>
  <td><?= $payment['amount_paid']?></td>
  <td><?= $payment['balance_amount']?></td>
  <td><?= $payment['date']?></td>
  <td><i class="bi bi-eye text-info"></i></td>
</tr>


<?php endforeach ?>

              