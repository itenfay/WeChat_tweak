//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString, UIColor;

@interface GameLifeTabViewNavConfig : NSObject
{
    _Bool _hideRightBarItem;
    _Bool _showSystemRightBarItem;
    _Bool _isWebViewLayoutUnderNav;
    _Bool _hasShow;
    NSString *_key;
    NSString *_title;
    UIColor *_titleColor;
    double _titleAlpha;
    UIColor *_navigationBarColor;
    NSArray *_rightNavConfigItems;
    NSNumber *_iconDark;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasShow; // @synthesize hasShow=_hasShow;
@property(nonatomic) NSNumber *iconDark; // @synthesize iconDark=_iconDark;
@property(nonatomic) _Bool isWebViewLayoutUnderNav; // @synthesize isWebViewLayoutUnderNav=_isWebViewLayoutUnderNav;
@property(copy, nonatomic) NSArray *rightNavConfigItems; // @synthesize rightNavConfigItems=_rightNavConfigItems;
@property(retain, nonatomic) UIColor *navigationBarColor; // @synthesize navigationBarColor=_navigationBarColor;
@property(nonatomic) _Bool showSystemRightBarItem; // @synthesize showSystemRightBarItem=_showSystemRightBarItem;
@property(nonatomic) _Bool hideRightBarItem; // @synthesize hideRightBarItem=_hideRightBarItem;
@property(nonatomic) double titleAlpha; // @synthesize titleAlpha=_titleAlpha;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)initWithTitle:(id)arg1 titleAlpha:(double)arg2;

@end

