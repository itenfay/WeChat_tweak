//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface MMLiveTabsBarViewInitParameter : NSObject
{
    double _minTabWidth;
    double _tabIndicatorWidth;
    double _tabPadding;
    UIColor *_tabIndicatorColor;
    UIColor *_tabColor;
    UIFont *_tabFont;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *tabFont; // @synthesize tabFont=_tabFont;
@property(retain, nonatomic) UIColor *tabColor; // @synthesize tabColor=_tabColor;
@property(retain, nonatomic) UIColor *tabIndicatorColor; // @synthesize tabIndicatorColor=_tabIndicatorColor;
@property(nonatomic) double tabPadding; // @synthesize tabPadding=_tabPadding;
@property(nonatomic) double tabIndicatorWidth; // @synthesize tabIndicatorWidth=_tabIndicatorWidth;
@property(nonatomic) double minTabWidth; // @synthesize minTabWidth=_minTabWidth;

@end

