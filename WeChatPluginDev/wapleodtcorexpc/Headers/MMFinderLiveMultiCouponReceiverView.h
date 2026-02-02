//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UILabel;

@interface MMFinderLiveMultiCouponReceiverView
{
    UIButton *_actionButton;
    UILabel *_validityPeriodLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *validityPeriodLabel; // @synthesize validityPeriodLabel=_validityPeriodLabel;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
- (void)setActionButtonHidden:(_Bool)arg1;
- (void)onCouponDidUpdate:(id)arg1;
- (void)fillWithCouponItem:(id)arg1;
- (void)onActionButtonClicked;
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

