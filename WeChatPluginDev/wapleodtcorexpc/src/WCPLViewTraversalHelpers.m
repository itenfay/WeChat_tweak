//
// WCPLViewTraversalHelpers.m
//

#import "WCPLViewTraversalHelpers.h"

UITableView *WCPLFindContainingTableView(UIView *view) {
    UIView *current = view;
    while ([current isKindOfClass:[UIView class]]) {
        if ([current isKindOfClass:[UITableView class]]) {
            return (UITableView *)current;
        }
        current = current.superview;
    }
    return nil;
}

UITableViewCell *WCPLFindContainingTableViewCell(UIView *view) {
    UIView *current = view;
    while ([current isKindOfClass:[UIView class]]) {
        if ([current isKindOfClass:[UITableViewCell class]]) {
            return (UITableViewCell *)current;
        }
        current = current.superview;
    }
    return nil;
}

void WCPLCollectViewsOfClassOrAllIfNil(UIView *root, Class targetClass, NSMutableArray<UIView *> *storage) {
    if (![root isKindOfClass:[UIView class]] || ![storage isKindOfClass:[NSMutableArray class]]) {
        return;
    }

    if (targetClass) {
        if ([root isKindOfClass:targetClass]) {
            [storage addObject:root];
        }
    } else {
        [storage addObject:root];
    }

    for (UIView *subview in root.subviews) {
        WCPLCollectViewsOfClassOrAllIfNil(subview, targetClass, storage);
    }
}

