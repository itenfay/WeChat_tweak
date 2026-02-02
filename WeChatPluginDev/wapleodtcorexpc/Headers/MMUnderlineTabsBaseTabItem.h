//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIView;

@interface MMUnderlineTabsBaseTabItem : NSObject
{
    double _customTabViewTop;
    UIView *_tabView;
    double _tabWidth;
    double _underlineWidth;
    double _autoUnderlineWidthExtension;
    CDUnknownBlockType _onSelectStateChangeBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onSelectStateChangeBlock; // @synthesize onSelectStateChangeBlock=_onSelectStateChangeBlock;
@property(nonatomic) double autoUnderlineWidthExtension; // @synthesize autoUnderlineWidthExtension=_autoUnderlineWidthExtension;
@property(nonatomic) double underlineWidth; // @synthesize underlineWidth=_underlineWidth;
@property(nonatomic) double tabWidth; // @synthesize tabWidth=_tabWidth;
@property(retain, nonatomic) UIView *tabView; // @synthesize tabView=_tabView;
@property(nonatomic) double customTabViewTop; // @synthesize customTabViewTop=_customTabViewTop;

@end

