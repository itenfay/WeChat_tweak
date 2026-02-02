//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, PAGView, UILabel;

@interface WCFinderProgressGuideView : UIView
{
    _Bool _isDismissing;
    CDUnknownBlockType _completion;
    UILabel *_descLabel;
    PAGView *_pagView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PAGView *pagView; // @synthesize pagView=_pagView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) _Bool isDismissing; // @synthesize isDismissing=_isDismissing;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)onAnimationEnd:(id)arg1;
- (void)displayPAG;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

