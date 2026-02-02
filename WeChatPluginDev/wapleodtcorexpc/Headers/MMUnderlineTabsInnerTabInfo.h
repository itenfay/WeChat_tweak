//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUnderlineTabsBaseTabItem;

@interface MMUnderlineTabsInnerTabInfo : NSObject
{
    _Bool _selected;
    MMUnderlineTabsBaseTabItem *_item;
    double _tabViewX;
    double _tabViewWidth;
    double _underLineViewWidth;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) double underLineViewWidth; // @synthesize underLineViewWidth=_underLineViewWidth;
@property(nonatomic) double tabViewWidth; // @synthesize tabViewWidth=_tabViewWidth;
@property(nonatomic) double tabViewX; // @synthesize tabViewX=_tabViewX;
@property(retain, nonatomic) MMUnderlineTabsBaseTabItem *item; // @synthesize item=_item;
- (void)callSelectStateChangeBlock;

@end

