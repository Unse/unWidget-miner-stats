# Version: 1.5
- A lot of work has been done with the engine. Almost completely rewritten for unification. Now the addition of new pools will take very little time. And it will be easier to add new features.
- Fix (for ever! :) ) prices from stocks.exchange ( big Thanks to @klamas (telegram) for RexEx)
- Can swith between H\S and kH\s
- Added tooltips
- Added ALL Hashvault Pools!!! :D
- ETN reward fee now 15% (from whattomine)

[Changelog](https://github.com/Unse/unWidget-miner-stats/blob/master/Changelog.md)

[Русский readme](https://github.com/Unse/unWidget-miner-stats/blob/master/README_RUS.md)
# Content
- [What is it](#what-is-it)
- [How to use](#how-to-use)
- [Author](#author)
- [Donate](#donate)
# What is it
It is widget (skin for [Rainmeter](https://www.rainmeter.net/)) (**Windows only!**) for desktop, showing the current statistics on the miners on pools.

![Screenshot1](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/bgsolid-0-bgblack.png)
![Screenshot2](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/bgsolid-100-bgwhite.png)

#### What pools there are widgets already

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

#### What statistics shows

- General Statistics:
   - Counting the time since the last block found **by pool**
   - The coin currency to **USD** and to **BTC** (currency is taken from https://www.cryptonator.com/)
- Statistics of the miner on the pool:
   - The current hashrate of the specified address
   - Current balance of the miner on the pool (Due)
   - How many coins were paid from the pool (Paid)
   - Profit and Reward (from the current hashrate) **in Day** and **in Month** in ($)
   - Network difficulty

#### What planned

- [ ] Make an extra minimalistic design (_not soon_)
- [ ] Make several ready-made themes (_not_ soon)
- [x] Make universal or static code (calculation and visualization) into separate files for universality and increase the speed of creating new skins for another pools
- [ ] It is more efficient to organize the work with the display, unify the widget template
- [x] Make code more clean
 
#### What user data is collected

To understand the demand for the widget, I allowed myself to add sending statistics to Google Analytics.
For this, the first three functions in the Measures section:
- \[MeasureRandomID\] - Generates a random ID that is not tied to anything
- \[MeasureStats\] - Forms the data to send
- \[MeasureSendStat\] - directly sends data to the google server

Only the following data is sent:
- Random ID (not tied to anything)
- Widget version
- The name of the widget (which pool)

I do not have access to either your IP or any other data, I see only the total number of running widgets with only differences in the versions and names of the widget.
If you do not want this data to be sent, delete the above functions: \[MeasureRandomID\],\[MeasureStats\],\[MeasureSendStat\]

# How to use

#### How to install
First you need to download and install the program **Rainmeter** version 4.0 final [from the official site] (https://www.rainmeter.net/).
Then there are two ways to install:
- Method 1. One installation file. (**preferred for first installation**)

Download the self-installing file "**unWidget-miner-stats_%current_version_number%.rmskin**" and double-click to install it. In this case, all the skin files will be immediately moved to the necessary directories and ready for use.
_\+ Convenient for initial installation, or in case of global update_
_\- All saved addresses in ** all ** widgets will be reset_
- Method 2: Manually copy .ini files

By default, skin files are stored in `%userprofile%\Documents\Rainmeter\Skins` (Win7-10). My skin uses the following hierarchy, it is desirable to follow it, but it is not necessary:
```
%userprofile%\Documents\Rainmeter\Skins
%userprofile%\Documents\Rainmeter\Skins\Unse
%userprofile%\Documents\Rainmeter\Skins\Unse\%skin_name%
```
For example, "C:\Users\Unse\Documents\Rainmeter\Skins\unse\IntenseMining.pro\", where there are 4 skin files:
```
intensemining.pro.ini - skin itself, required file
intenselogo.png - skin logo, required file
CheckVer.txt - used by me to check for updates, it is not necessary to download
Changelog.txt - used by me to conduct a changelogue, it is not necessary to download
```
You can download separately .ini and .png and put in the folder of the skin in the corresponding directory.
**.ini different pools must be placed in different subfolders**, otherwise they will change each other, when turned on, and not displayed next!

#### Management
- After starting the Rainmeter program, select the desired skin (or several).
- **Adding an address:**
  - You must press the **Edit** button on the skin
  - ![Add_addr1](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/add_addr1.png)
  - In the appeared window, insert your address of the miner on the corresponding pool, press **Enter**.
  - ![Add_addr2](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/add_addr2.png)
  - After a few seconds, your hashrate and other statistics will start to show up.
- **Save / Delete address**
  - After each restart of the program \ skin, you have to re-enter the address.
  - Button **Save** and **Delete** - saves and deletes your current address directly in the .ini file of the skin, and it does not have to be reentered after restarting.
  - ![Save_and_Delete_addr](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/save_del_addr.png)
- **Switching between Total Paid and Total Due**
  - You can switch between the current balance and the amount of payments simply by clicking on the line "**Your total paid**" or "**Your total Due**"
  - ![paid\due](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/paid_due.png)
- **Switching between the Coin Currency and your current (from hashrate) profit and reward "$ per day" and "$ per month"**
  - Click on the area of the coin currency the required number of times
  - ![currency\profit](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/currency_profit.png)
- **Open widget page and pool page**
  - Open the widget page - click on the coin icon (1). Open the pool page - click on the pool name (2).
  - ![links](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/links.png)
- **Context Menu**
  - Also widgets have context menu
  - ![context](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/context_menu.png)

#### How to update
- **Notification**
  - The Widget is scientific itself to check for fresh versions. As soon as I post the new version - a pop-up (clickable) window with a notification for 2.5 seconds appears in the widget.
  - ![newver_popup](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/newver_popup.png)
  - After the pop-up window collapses, the inscription "**New Version Available**" will light up on the widget.
  - ![newver_small](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/newver_small.png)
  - Clicking on the flash notification or on the red label will open a window with information about the new version.
  - ![Changelog](https://raw.githubusercontent.com/Unse/unWidget-miner-stats/master/ScreenShots/changelog.png)
  - 1 - Hide window
  - 2 - Link to download the .ini file of the widget
  - 3 - Description of changes in the new version
- **Update**
  - Method 1.
    - Under the link ** Download link ** you can download the .ini file of the specific pool widget.
    - Download .ini to replace the old .ini in the corresponding folder of skins (or download the entire folder and replace it).
    - Restart Rainmeter
    - Re-write the address in the updated widget
  - Method 2.
    - Most likely when updating even one widget, I will redesign the installation package .rmskin, so you can click on the coin icon and download the fresh installation file.
# Author
unSe (SeveReedge)

For all questions, the group at **Telegram** @unWidget [Invite link](https://t.me/unWidget)
If you find a mistake in the translation, please write me.

# Donate
If you like the widget, you can send me some BTC ; XMR or ZEC 
- BTC: `1QJu6Yuwd3MLz6CUfNzy2FLLmqgo2h8eWv`
- XMR: `466LPipyiqQ5fER4mRY6XJCBAcx6cSq6DeAeun8aySqmeuCSQB1QvBWKLKgmQmyQXx7ZDg48REgHDWne37ZNJrV1KVMUL1L`
- ZEC: `t1NTaptaMQiu2j3hHoZBdpwWRwqMouYo1mD`
- ITNS: `iz4ttq3EHWfG8sTzbpfgUgQ9Kv5pubmEnh3aYxJy1KkAe1aC6TspEZ2EFGEkFUiwmXDSMEDYMjTo7VKDj5BSLF2k1CYmuAXqj`
- SUMO: `Sumoo4nz83bRMPkS8ERdT7AkNr3Qdct96eiXAC249kbGbdRE2jbii98NwnBYMviPTaKuaPBJdGEfzYdPQ4GBLnU8ijHjvRGQQer`
