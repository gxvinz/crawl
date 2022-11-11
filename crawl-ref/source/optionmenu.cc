#include "AppHdr.h"

#include "menu.h"

#include <cctype>
#include <functional>

#include "cio.h"
#include "colour.h"
#include "command.h"
#include "coord.h"
#include "env.h"
#include "tile-env.h"
#include "hints.h"
#include "invent.h"
#include "libutil.h"
#include "macro.h"
#include "message.h"
#ifdef USE_TILE
 #include "mon-util.h"
#endif
#include "options.h"
#include "player.h"
#include "player-save-info.h"
#include "state.h"
#include "stringutil.h"
#ifdef USE_TILE
 #include "terrain.h"
#endif
#ifdef USE_TILE_LOCAL
 #include "tilebuf.h"
#endif
#ifdef USE_TILE
 #include "tile-flags.h"
 #include "tile-player-flag-cut.h"
 #include "rltiles/tiledef-dngn.h"
 #include "rltiles/tiledef-icons.h"
 #include "rltiles/tiledef-main.h"
 #include "rltiles/tiledef-player.h"
#endif
#ifdef USE_TILE_LOCAL
 #include "tilefont.h"
#endif
#ifdef USE_TILE
 #include "tilepick.h"
 #include "tilepick-p.h"
#endif
#ifdef USE_TILE_LOCAL
 #include "tilereg-crt.h"
#endif
#ifdef USE_TILE
 #include "travel.h"
#endif
#include "ui.h"
#include "unicode.h"
#include "unwind.h"
#ifdef USE_TILE_LOCAL
#include "windowmanager.h"
#endif

using namespace ui;

menu_letter2 OptionMenuEntry::m_letter;#needs to be escape




if (key_is_escape(keyin) || allow_easy_quit && keyin == ' ')
    {
    ret = PROMPT_ABORT;
    break;
    }
