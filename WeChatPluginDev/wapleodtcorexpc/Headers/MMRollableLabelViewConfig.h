//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIFont;

@interface MMRollableLabelViewConfig : NSObject
{
    _Bool _autoAnimation;
    double _maxLabelWidth;
    double _rollSpeedPerSecond;
    double _reverseInterval;
    UIFont *_labelFont;
    double _minHeight;
    unsigned long long _rollingMode;
    double _scrollSpacing;
    double _iconTextPading;
    struct CGSize _pagSize;
    struct UIEdgeInsets _contentInset;
}

- (void).cxx_destruct;
@property(nonatomic) double iconTextPading; // @synthesize iconTextPading=_iconTextPading;
@property(nonatomic) struct CGSize pagSize; // @synthesize pagSize=_pagSize;
@property(nonatomic) _Bool autoAnimation; // @synthesize autoAnimation=_autoAnimation;
@property(nonatomic) double scrollSpacing; // @synthesize scrollSpacing=_scrollSpacing;
@property(nonatomic) unsigned long long rollingMode; // @synthesize rollingMode=_rollingMode;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(retain, nonatomic) UIFont *labelFont; // @synthesize labelFont=_labelFont;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) double reverseInterval; // @synthesize reverseInterval=_reverseInterval;
@property(nonatomic) double rollSpeedPerSecond; // @synthesize rollSpeedPerSecond=_rollSpeedPerSecond;
@property(nonatomic) double maxLabelWidth; // @synthesize maxLabelWidth=_maxLabelWidth;

@end

