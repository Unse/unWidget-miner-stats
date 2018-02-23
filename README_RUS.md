# Version: 1.5
- Проделана большая работа с "движком" моего скина. Переработано все в пользу унификации. Теперь смогу очень оперативно добавлять новые пулы или монеты. И проще будет добавлять новые функции.
- Наконец починил неверно берущиеся прайсы со stocks.exchange (Спасибо большое Марату Рахимову aka @klamas за регулярки!)
- Добавил переключение отображения между хэшами в секунду и Килохешами в секунду (просто кликнуть на хешрейт)
- Добавил подсказки
- Добавил ВСЕ пулы нашего любимого Hashvault 
- Fee для ETN снижен до 15% (взято с whattomine)
- Новые, удобные настройки прозрачности в контекстном меню

[Changelog](https://github.com/Unse/unWidget-miner-stats/blob/master/Changelog.md)
# Оглавление
- [Что это](#Что-это)
- [Как использовать](#Как-использовать)
- [Автор](#Автор)
# Что это
Это виджет (скин к программе [Rainmeter](https://www.rainmeter.net/)) (**Windows only!**)для рабочего стола, отображающий текущую статистику по майнерам на пулах.

![Overwiev](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/Overwiev.png)

#### Под какие пулы уже есть виджеты

* [Hashvault.pro/](https://www.hashvault.pro/)
  - [monero.hashvault.pro](https://monero.hashvault.pro)
  - [aeon.hashvault.pro](https://aeon.hashvault.pro)
  - [sumokoin.hashvault.pro](https://sumokoin.hashvault.pro)
  - [karbo.hashvault.pro](https://karbo.hashvault.pro)
  - [electroneum.hashvault.pro](https://electroneum.hashvault.pro)
  - [intense.hashvault.pro](https://intense.hashvault.pro)
  - [leviarcoin.hashvault.pro](https://leviarcoin.hashvault.pro)
  - [fonero.hashvault.pro](https://fonero.hashvault.pro)
  - [edollar.hashvault.pro](https://edollar.hashvault.pro)
  - [graft.hashvault.pro](https://graft.hashvault.pro)
* [zec.nanopool.org](https://zec.nanopool.org/)
* [zcash.flypool.org](https://zcash.flypool.org/)
* [dwarfpool.com/zec](http://dwarfpool.com/zec/)

#### Какую статистику показывает

- Общая статистика:
  - Отсчет времени с момента последнего найденного блока **пулом**
  - Курс монеты к **USD** и к **BTC**
- Статистика майнера на пуле:
  - Текущий общий хэшрейт заданного адреса
  - Текущий баланс майнера на пуле ( Due )
  - Сколько всего монет выведено майнером с пула ( Paid )
  - Profit и Reward (от текущего хэшрейта) **в День** и **в Месяц** в ( $ )
  - Сложность сети

#### Что планируется

- [x] Сделать код чище, поправить комменты
- [x] Вынести универсальный или статичный код (рассчет и визуализация) в отдельные файлы для универсальности и увеличения скорости создания новых виджетов
- [ ] Сделать дополнительный минималистичный дизайн (_не скоро_)
- [ ] Сделать несколько готовых тем оформления (_не скоро_)
- [ ] Более грамотно организовать работу с отображением, унифицировать шаблон виджета
 
#### Какие данные пользователя собираются

Для понимания спроса на виджет, я позволил себе добавить отправку статистики на Google Analytics.
Отправляются только следующие данные:
- Случайный ID (ни к чему не привязанный)
- Версия виджета
- Название виджета (под какой пул)

Мне не доступны ни ваши IP ни какие либо другие данные, я вижу только общее количество запущенных виджетов всего с различиями по версиям и названиями виджета.

**Статистика использования виджета мотивирует меня не забросить его допиливать и дорабатывать**

# Как использовать

#### Как установить
Сначала необходимо скачать и установить саму программу **Rainmeter** версии 4.1 final [с официального сайта](https://www.rainmeter.net/).

Скачать самоустановочный файл "**All pools widget (by uns\_e)\_%номер_текущей_версии%.rmskin**" и двойным кликом установить его. При этом все файлы скина сразу будут перемещены в нужные директории и готовы к использованию.
_\- Все сохраненные адреса во **всех** виджетах будут сброшены_

#### Управление
- После запуска программы Rainmeter выберите нужный скин (или несколько).
- **Добавление адреса:**
  - Необходимо нажать кнопку **Edit** на скине
  - ![Добавить адрес1](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/add_addr1.png)
  - В появившееся окно вставить ваше адрес майнера на соответствующем пуле, нажать **Enter**.
  - ![Добавить адрес2](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/add_addr2.png)
  - Через несколько секунд у вас начнет отобржататься ваш хэшрейт и другая статистика.
- **Сохранение\Удаление адреса**
  - После каждого перезапуска программы\скина вам придется заново вбивать адрес. 
  - Кнопка **Save** и **Delete** - сохраняет и удаляет ваш текущий адрес прямо в .ini файл скина, и его не придется заного вбивать после перезапуска.
  - ![Сохранить и Удалить адрес](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/save_del_addr.png)
- **Переключение между Total Paid и Total Due**
  - Вы можете переключаться между текущим балансом и суммой выплат просто кликнув на строку "**Your total paid**"
  - ![paid \ due](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/paid_due.png)
- **Переключение между Курсом монеты и вашим текущим (от хэшрейта) профитом "$ в день" и "$ в месяц"***
  - Кликайте по области курса монеты нужное количество раз
  - ![currency \ profit](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/currency_profit.png)
- **Открыть страницу виджета и страницу пула***
  - Открыть страницу виджета - кликнуть по иконке монеты (1). Открыть страницу пула - кликнуть по названию пула(2).
  - ![links](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/links.png)

#### Как обновить
- **Уведомление**
  - Виджет научен сам проверять наличие свежих версий. Как только я выкладываю новую версию - в виджете появляется всплывающее (кликабельное) окно с уведомлением на 2,5 секунды.
  - ![newver_popup](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/newver_popup.png)
  - После того как свернется всплывающее окно, на виджете загорится надпись "**New Version Available**".
  - ![newver_small](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/newver_small.png)
  - Кликнув по вспылвающему уведомлению или по красной надписи у вас откроется окно с информацией о новой версии.
  - ![Changelog](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/changelog.png)
  - 1 - Скрыть окно
  - 2 - Ссылка на скачивание .ini файла виджета
  - 3 - Описание изменений в новой версии
- **Обновление**
  - Способ 1.
    - Кликните **Download link** и скачайте последний релиз.
    - Установите скачанный **.rmskin** файл, все обновится автомтически
    - Перезапустите Rainmeter
    - Заново вбить адрес в обновленный виджет
  - Способ 2.
    - Вручную скачайте папку **unse** с гитхаба
    - Удалите предыдущую папку по адресу %userprofile%\Documents\Rainmeter\Skins\unse
    - Скопируйте скачанную папку по тому же адресу
    - Перезапустите Rainmeter
    - Вбейте необходимые адреса
# Автор
[unS_e](https://t.me/SeveRe_edGe) (SeveRe_edge)

По всем вопросам группа в Telegram @unWidget [Invite link](https://t.me/unWidget)

Если вам понравился виджет и вы нашли его полезным, вы можете любое количество любых монет. (Это мотивирует меня сильнее :D )
Спасибо тем кто поддерживал меня и морально и финансово все это время!

- BTC: `1NKEySHjCNcvStKMUr3x1cHAUNp7UtLFo6`
- XMR: `46DVhimWRR3GSrSgf24Hhq6cXdpgrgZPuGorNyfKj6645JtLuS34xqFGEVXsYgqneMG3PWUqi9oVQ9Zq335wKZcf6BarAsk`
- ZEC: `t1cP5zJ6oFsodfQL3ThsPRuNfub9AT8eRcn`
- ITNS: `iz4ttq3EHWfG8sTzbpfgUgQ9Kv5pubmEnh3aYxJy1KkAe1aC6TspEZ2EFGEkFUiwmXDSMEDYMjTo7VKDj5BSLF2k1CYmuAXqj`
- SUMO: `Sumoo4nz83bRMPkS8ERdT7AkNr3Qdct96eiXAC249kbGbdRE2jbii98NwnBYMviPTaKuaPBJdGEfzYdPQ4GBLnU8ijHjvRGQQer`
- ETN: `etnkD5HUtSNjAbEvAUXTZQPg4uXZN28WsGYVKiF6WoyrZv34ALVPod2BpPR27k1xKjbbyRDUbNBQgBuWfeY1jk4w2Q41VzcaTA`
