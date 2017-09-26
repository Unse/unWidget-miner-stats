# Оглавление
- [Что это](#Что-это)
- [Как использовать](#Как-использовать)
- [Автор](#Автор)
# Что это
Это виджет (скин к программе [Rainmeter](https://www.rainmeter.net/)) для рабочего стола, отображающий текущую статистику по майнерам на пулах.

![Screenshot1](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/bgsolid-0-bgblack.png)
![Screenshot2](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/bgsolid-100-bgwhite.png)

#### Под какие пулы уже есть виджеты

* [Minemonero.pro](https://minemonero.pro)
* [Sumomining.pro](https://Sumomining.pro)
* [Aeonmining.pro](https://Aeonmining.pro)
* [Intensemining.pro](https://Intensemining.pro)

#### Какую статистику показывает

- Общая статистика:
  - Отсчет времени с момента последнего найденного блока **пулом**
  - Курс монеты к **USD** и к **BTC** ( курс берется с https://www.cryptonator.com/)
- Статистика майнера на пуле:
  - Текущий общий хэшрейт заданного адреса
  - Текущий баланс майнера на пуле ( Due )
  - Сколько всего монет выведено майнером с пула ( Paid )
  - Профит (от текущего хэшрейта) **в День** и **в Месяц** в ( $ )
    - [x] Minemonero.pro widget
    - [x] Sumomining.pro widget
    - [ ] Aeonmining.pro widget
    - [ ] Intensemining.pro widget

#### Что планируется

- Добавить виджет для ZEC (nanopool)
- Добавить текущую сложность сети
- ~~надписи по русски~~
- Заменить все ссылки с обла на гитхаб
- Сделать дополнительный минималистичный дизайн (_не скоро_)
- Сделать несколько готовых тем оформления (_не скоро_)

#### Какие данные пользователя собираются

Никакие данные пользователя не собираются и никуда не отправляются. Пароли, юзернеймы, регистрации и прочие данные не требуются для работы виджета. Требутеся только платежный адрес майнера, который если и сохраняется, то только локально.

# Как использовать

#### Как установить
Сначала необходимо скачать и установить саму программу **Rainmeter** версии 4.0 final [с официального сайта](https://www.rainmeter.net/).
Далее два способа установки:
- Способ 1. Одним установочным файлом. (**предпочтительный при первой установке**)

Скачать самоустановочный файл с расширением .rmskin и двойным кликом установить его. При этом все файлы скина сразу будут перемещены в нужные директории и готовы к использованию.
_\+ Удобно для первоначальной установки, либо в случае глобального обновления_
_\- Все сохраненные адреса во **всех** виджетах будут сброшены_
- Способ 2. Вручную копировать .ini файлы

По умолчанию файлы скинов хранятся в `%userprofile%\Documents\Rainmeter\Skins` (Win7-10). Мой скин использует следующую иерархию, следовать ей желательно, но не обязательно:
```
%userprofile%\Documents\Rainmeter\Skins
%userprofile%\Documents\Rainmeter\Skins\Unse
%userprofile%\Documents\Rainmeter\Skins\Unse\%название_скина%
```
Например "C:\Users\Unse\Documents\Rainmeter\Skins\unse\IntenseMining.pro\", где находятся 4 файла скина:
```
intensemining.pro.ini - сам скин, обязательный файл
intenselogo.png - лого скина, обязательный файл
CheckVer.txt - используется мной для проверки обновлений, скачивать не обязательно
Changelog.txt - используется мной для ведения ченжлога, скачивать не обязательно
```
Вы можете отдельно скачать .ini и .png и положить в папку скина в соответствующей директории.
**.ini разных пулов обязательно класть в разные подпапки**, иначе они будут менять друг друга, при включении, а не отображаться рядом!

#### Управление
- После запуска программы Rainmeter выберите нужный скин (или несколько).
- **Добавление адреса:**
  -Необходимо нажать кнопку **Edit** на скине
  -[Добавить адрес1](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/add_addr1.png)
  -В появившееся окно вставить ваше адрес майнера на соответствующем пуле, нажать **Enter**.
  -[Добавить адрес2](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/add_addr2.png)
  -Через несколько секунд у вас начнет отобржататься ваш хэшрейт и другая статистика.
- **Сохранение\Удаление адреса**
  - После каждого перезапуска программы\скина вам придется заново вбивать адрес. 
  - Кнопка Save и Delete - сохраняет и удаляет ваш текущий адрес прямо в .ini файл скина, и его не придется заного вбивать после перезапуска.
  - [Сохранить и Удалить адрес](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/save_del_addr.png)
- **Переключение между Total Paid и Total Due**
  - Вы можете переключаться между текущим балансом и суммой выплат просто кликнув на строку "**Your total paid**"
  - [paid \ due](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/paid_due.png)
- **Переключение между Курсом монеты и вашим текущим (от хэшрейта) профитом "$ в день" и "$ в месяц"***
  - Кликайте по области курса монеты нужное количество раз
  - [currency \ profit](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/currency_profit.png)
- **Открыть страницу виджета и страницу пула***
  - Открыть страницу виджета - кликнуть по иконке монеты (1). Открыть страницу пула - кликнуть по названию пула(2).
  - [links](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/links.png)

#### Как обновить

# Автор
unSe (SeveReedge)
По всем вопросам группа в Telegram: [Invite link](https://t.me/unWidget)

Если вам нравится виджет, вы можете послать мне немного XMR на `466LPipyiqQ5fER4mRY6XJCBAcx6cSq6DeAeun8aySqmeuCSQB1QvBWKLKgmQmyQXx7ZDg48REgHDWne37ZNJrV1KVMUL1L`
