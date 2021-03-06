#ifndef _PLUGIN_DIRECTIVE_H
#define _PLUGIN_DIRECTIVE_H

#include <string.h>
#include "RemapDirective.h"

class PluginDirective : public RemapDirective {
  public:
    PluginDirective();
    ~PluginDirective();

    DirectiveParams *newDirectiveParams(const int rank, const char *filename,
        const int lineNo, const char *lineStr, const int lineLen,
        DirectiveParams *parent, const char *paramStr, const int paramLen,
        const bool bBlock);
};

class PluginParamDirective : public RemapDirective {
  public:
    PluginParamDirective();
    ~PluginParamDirective();

    DirectiveParams *newDirectiveParams(const int rank, const char *filename,
        const int lineNo, const char *lineStr, const int lineLen,
        DirectiveParams *parent, const char *paramStr, const int paramLen,
        const bool bBlock);
};

#endif

