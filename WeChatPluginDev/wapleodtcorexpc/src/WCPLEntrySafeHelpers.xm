// Internal include-only module.
// Shared safe helper logic for WCPLPluginEntryHook.xm.
// Do not add this file to $(TWEAK_NAME)_FILES directly.

#import "WCPLPureHelpers.h"
#import "WCPLObjcSafeCall.h"

static id wcpl_entry_safeValueForKey(id obj, NSString *key) {
    return WCPLSafeValueForKey(obj, key);
}

static id wcpl_entry_safeObjectIvar(id obj, const char *name) {
    return WCPLSafeObjectIvar(obj, name);
}

static NSString *wcpl_entry_safeCellTitle(id cellManager) {
    id cellConfig = wcpl_entry_safeValueForKey(cellManager, @"cellConfig");
    id leftConfig = wcpl_entry_safeValueForKey(cellConfig, @"leftConfig");
    id title = wcpl_entry_safeValueForKey(leftConfig, @"title");
    return WCPLTrimText(title);
}

static NSArray *wcpl_entry_allSections(id tableViewMgr) {
    if (!tableViewMgr) {
        return nil;
    }

    NSArray *sections = nil;
    if ([tableViewMgr respondsToSelector:@selector(getAllSections)]) {
        @try {
            sections = ((id (*)(id, SEL))objc_msgSend)(tableViewMgr, @selector(getAllSections));
        } @catch (__unused NSException *exception) {
            sections = nil;
        }
    }
    if (![sections isKindOfClass:[NSArray class]]) {
        id value = wcpl_entry_safeValueForKey(tableViewMgr, @"sections");
        if ([value isKindOfClass:[NSArray class]]) {
            sections = (NSArray *)value;
        }
    }
    return [sections isKindOfClass:[NSArray class]] ? sections : nil;
}

static NSArray *wcpl_entry_allCells(id section) {
    if (!section) {
        return nil;
    }

    NSArray *cells = nil;
    if ([section respondsToSelector:@selector(getAllCells)]) {
        @try {
            cells = ((id (*)(id, SEL))objc_msgSend)(section, @selector(getAllCells));
        } @catch (__unused NSException *exception) {
            cells = nil;
        }
    }
    if (![cells isKindOfClass:[NSArray class]]) {
        id value = wcpl_entry_safeValueForKey(section, @"cells");
        if ([value isKindOfClass:[NSArray class]]) {
            cells = (NSArray *)value;
        }
    }
    return [cells isKindOfClass:[NSArray class]] ? cells : nil;
}

static BOOL wcpl_entry_tableMgrContainsCellWithTitles(id tableViewMgr, NSArray<NSString *> *titles) {
    NSArray *sections = wcpl_entry_allSections(tableViewMgr);
    if (sections.count == 0 || titles.count == 0) {
        return NO;
    }

    for (id section in sections) {
        NSArray *cells = wcpl_entry_allCells(section);
        if (cells.count == 0) {
            continue;
        }
        for (id cell in cells) {
            NSString *title = wcpl_entry_safeCellTitle(cell);
            if (title.length > 0 && [titles containsObject:title]) {
                return YES;
            }
        }
    }
    return NO;
}
