//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLivePromoteDisplayLeaseToken, MMUIButton, NSString, UIImageView, UILabel;

@interface MMFinderLiveConnectMicRandomHintView : UIView
{
    UIView *_contentView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    MMUIButton *_applyButton;
    MMFinderLivePromoteDisplayLeaseToken *_displayLeaseToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLivePromoteDisplayLeaseToken *displayLeaseToken; // @synthesize displayLeaseToken=_displayLeaseToken;
@property(retain, nonatomic) MMUIButton *applyButton; // @synthesize applyButton=_applyButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)onPromoteDisplayLeaseInvalidated:(id)arg1 forReason:(unsigned long long)arg2;
- (void)onPromoteDisplayLeaseViewAttached:(id)arg1;
- (void)onLiveCanApplyConnecteMicChanged:(_Bool)arg1;
- (void)onApplyButtonTapped;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithGuideInfo:(id)arg1 displayLeaseToken:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

