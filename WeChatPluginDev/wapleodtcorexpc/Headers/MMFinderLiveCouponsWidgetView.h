//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderLiveGetFinderCouponWidgetsResponse, PAGView, UILabel;

@interface MMFinderLiveCouponsWidgetView : UIView
{
    _Bool _isNormalStyle;
    FinderLiveGetFinderCouponWidgetsResponse *_info;
    PAGView *_pagView;
    UILabel *_label;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNormalStyle; // @synthesize isNormalStyle=_isNormalStyle;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) PAGView *pagView; // @synthesize pagView=_pagView;
@property(retain, nonatomic) FinderLiveGetFinderCouponWidgetsResponse *info; // @synthesize info=_info;
- (void)updateWithInfo:(id)arg1;
- (id)getWeakenPAG;
- (id)getEnterPAG;
- (void)updateTextsFor:(id)arg1;
- (void)layoutSubviews;
- (void)toNormalStyleWithCompletion:(CDUnknownBlockType)arg1;
- (void)enter;
- (id)initWithInfo:(id)arg1;

@end

