#import "WCHookTableViewFactory.h"

#import <objc/message.h>

#import "WeChatRedEnvelop.h"

@implementation WCHookTableViewFactory

+ (Class)wchook_classNamed:(NSString *)className {
    if (className.length == 0) {
        return Nil;
    }
    return NSClassFromString(className);
}

+ (nullable WCTableViewManager *)tableManagerWithFrame:(CGRect)frame style:(UITableViewStyle)style {
    Class managerClass = [self wchook_classNamed:@"WCTableViewManager"];
    if (!managerClass) {
        return nil;
    }

    SEL initializer = @selector(initWithFrame:style:);
    id instance = ((id (*)(Class, SEL))objc_msgSend)(managerClass, @selector(alloc));
    if (!instance || ![instance respondsToSelector:initializer]) {
        return nil;
    }

    instance = ((id (*)(id, SEL, CGRect, UITableViewStyle))objc_msgSend)(instance, initializer, frame, style);
    return instance;
}

+ (nullable id)sectionWithHeader:(NSString *)header footer:(NSString *)footer {
    Class sectionClass = [self wchook_classNamed:@"WCTableViewSectionManager"];
    if (!sectionClass) {
        return nil;
    }

    SEL headerFooterSelector = @selector(sectionInfoHeader:Footer:);
    if ([sectionClass respondsToSelector:headerFooterSelector]) {
        return ((id (*)(Class, SEL, id, id))objc_msgSend)(sectionClass, headerFooterSelector, header, footer);
    }
    return [self defaultSection];
}

+ (nullable id)defaultSection {
    Class sectionClass = [self wchook_classNamed:@"WCTableViewSectionManager"];
    SEL defaultSelector = @selector(defaultSection);
    if (sectionClass && [sectionClass respondsToSelector:defaultSelector]) {
        return ((id (*)(Class, SEL))objc_msgSend)(sectionClass, defaultSelector);
    }
    return nil;
}

+ (nullable id)switchCellWithTitle:(NSString *)title
                        descriptor:(NSString *)descriptor
                                on:(BOOL)isOn
                            target:(id)target
                            action:(SEL)selector {
    Class cellClass = [self wchook_classNamed:@"WCTableViewCellManager"];
    if (!cellClass) {
        return nil;
    }

    SEL selectorWithDescription = @selector(switchCellForSel:target:leftImage:title:desc:on:);
    if ([cellClass respondsToSelector:selectorWithDescription]) {
        return ((id (*)(Class, SEL, SEL, id, id, id, id, BOOL))objc_msgSend)(cellClass,
                                                                            selectorWithDescription,
                                                                            selector,
                                                                            target,
                                                                            nil,
                                                                            title,
                                                                            descriptor,
                                                                            isOn);
    }

    SEL fallbackSelector = @selector(switchCellForSel:target:title:on:);
    if ([cellClass respondsToSelector:fallbackSelector]) {
        return ((id (*)(Class, SEL, SEL, id, id, BOOL))objc_msgSend)(cellClass,
                                                                     fallbackSelector,
                                                                     selector,
                                                                     target,
                                                                     title,
                                                                     isOn);
    }
    return nil;
}

+ (nullable id)navigationCellWithTitle:(NSString *)title
                                detail:(NSString *)detail
                                target:(id)target
                                action:(SEL)selector
                        accessoryType:(UITableViewCellAccessoryType)accessoryType {
    Class normalClass = [self wchook_classNamed:@"WCTableViewNormalCellManager"];
    if (!normalClass) {
        return nil;
    }

    SEL detailSelector = @selector(normalCellForSel:target:title:rightValue:accessoryType:);
    if ([normalClass respondsToSelector:detailSelector]) {
        return ((id (*)(Class, SEL, SEL, id, id, id, long long))objc_msgSend)(normalClass,
                                                                              detailSelector,
                                                                              selector,
                                                                              target,
                                                                              title,
                                                                              detail,
                                                                              accessoryType);
    }

    SEL fallbackSelector = @selector(normalCellForSel:target:title:accessoryType:);
    if ([normalClass respondsToSelector:fallbackSelector]) {
        return ((id (*)(Class, SEL, SEL, id, id, long long))objc_msgSend)(normalClass,
                                                                          fallbackSelector,
                                                                          selector,
                                                                          target,
                                                                          title,
                                                                          accessoryType);
    }
    return nil;
}

+ (void)addSection:(id)section toManager:(WCTableViewManager *)manager {
    if (!section || !manager) {
        return;
    }
    SEL selector = @selector(addSection:);
    if ([manager respondsToSelector:selector]) {
        ((void (*)(id, SEL, id))objc_msgSend)(manager, selector, section);
    }
}

+ (void)addCell:(id)cell toSection:(id)section {
    if (!cell || !section) {
        return;
    }
    SEL selector = @selector(addCell:);
    if ([section respondsToSelector:selector]) {
        ((void (*)(id, SEL, id))objc_msgSend)(section, selector, cell);
    }
}

+ (void)reloadTableView:(UITableView *)tableView {
    if (!tableView) {
        return;
    }
    [tableView reloadData];
}

@end
