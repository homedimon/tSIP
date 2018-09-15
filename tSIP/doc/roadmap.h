/** \file
	\brief tSIP roadmap
*/

/** \page roadmap Roadmap

Bunch of things to do in future releases. No particular order:

	- multiple accounts, even if only single active at the time
	- UDP transport keepalive
	- context help
	- SIP message graphs
	- send/receive SIP MESSAGE (IM)
	- new function: send custom message

	- some things from baresip
		- #      Send OPTIONS
		- audio_loop_test
		- call_debug
		- contact_send_options_to_all

	- misleading "Failed to start application" status when no valid account is configured


- DTMF local playback

- ring and talk: volume control


Call recording:
- fixme: possible hazards when starting recording
- other output formats, compression
- settings: record incoming/outgoing
- manual record + recording state info
- semi-automatic record mode: record call by default, delete file if not "saved" by user
- UID for file names to avoid conflicts with very short (<1 s) recordings


- new button type: auto answer / DND with specified answer code

- hotkeys: move focus to transfer textbox

- example: link handling from mail client
- Wideband Opus codec
- ICE
- select reject code: 486 Busy (other devices keep ringing) or 603 Decline (all devices stop ringing)
- hotkeys or speed dial: volume
- encrypt password / password prompt
- contacts: master/detail view
- contact groups
- different ringtones for different contacts
- detect: no input snd dev
- handle "Call completed elsewhere" disconnection reason - do not add this call to history (or add to history with special mark)
- call history: master/detail view, copying number to clipboard, adding to phonebook
- number processing / "LCR" / dialplan

- user definable Call/Hangup buttons (horizontal configurable button container?)
- buttons: Dialpad/Contacts/History and equivalent hotkey actions replacing existing tab row
- combine regular number edit and transfer number edit into one 

- show main window on outgoing call made using protocol handler / hotkey

- settings: time for hotkey anti-repeat timer

- dialing using speech recognition

- BLF: alert me on when extension become idle

- contacts: assign short number (example purpose: direct IP calling using short numbers)

- entering password at startup and after unregistering (do not store password)

- prepare some extra icons for programmable keys

- separate icon for recorviewer

- BLF list

- BLF barge in

- visual appearance config for programmable button (text color, font, background color)

- gnome3 and wine: call notifications not working? (LS)

- warn user if wave file source is selected but source file does not exist

- translation mechanism

- remote phonebook (XML)

- supporting animated GIFs or frame-by-frame animations in BLFs

- CDR plugin: storing call details to CSV or some kind of database (mysql)

- contacts plugin: fetch number description from other data source

libre version 0.4.17 contains an improvement for the SIP-stack
when multiple SRV-records are present in the domain


> 3.  The voice quality is slightly fuzzy/muddy.  I've experienced this with
other open source SIP phones as well - everything except Zoiper.  Voices are
noticably clearer when using Zoiper - and all apps are configured to use
G711u, so it's an equal test across apps.  Do you have any idea why this is
and whether it can be addressed?
- test speex_pp module - add RX dir?

- blinking tray icon while in call

- aufile: accept mp3 files

- "BLF" p2p: subscription server

- Lua: receive DTMF from queue; IVR

- Lua: text to speech during regular call

button: mouse down event

> I was  
> wondering if it is possible to pause or stop the recording while still  
> on the call?


new type of input audio device: wave player with wav queue (for IVR); silence if no file is queued

Lua: get BLF button state => route incoming call to selected (idle) extension

- add script edit button next to script selection button(s)

- audible DTMF keypad tones during the call and while dialing: as opt-in options, PlaySound, resources, ASYNC?

- sine wave audio input device

- provisioning for main config, buttons and phonebook

- more command-line control: show/hide, dtmf, hold/unhold, start recording

TXPManifest

ping plugin: add context menu to history



out-of-dialog REFER:
I've cut some corners with skipping subscription creation but I would expect ANVEO is no better (not passing transfer status to the user) so it might work.
One more flaw is that full URI from REFER is stored in call history.

- add option to hide button switching sidecar (useful for kiosk mode)

- ua_init: add option to disable udp/tcp transport (now both UDP/TCP are always enabled)

- 1000 BLFs (or BLFlist?), column paging

- RTP stats: call quality testing

- list of network interfaces in settings for binding (GUIDs)

*/


