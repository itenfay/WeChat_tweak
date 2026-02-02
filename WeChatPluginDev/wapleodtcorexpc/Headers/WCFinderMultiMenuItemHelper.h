//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIBarButtonItem, UIView, UIViewController;

@interface WCFinderMultiMenuItemHelper : NSObject
{
    _Bool _fade;
    double _itemPadding;
    UIBarButtonItem *_barItem;
    UIViewController *_vc;
    UIView *_container;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) UIBarButtonItem *barItem; // @synthesize barItem=_barItem;
@property(nonatomic) _Bool fade; // @synthesize fade=_fade;
@property(nonatomic) double itemPadding; // @synthesize itemPadding=_itemPadding;
- (void)_onSubviewHiddenChange:(id)arg1;
- (void)layout;
- (void)_updateLayout;
- (void)addView:(id)arg1;
- (id)init:(id)arg1;

@end

