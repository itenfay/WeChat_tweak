//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveTask, MMFinderLiveTaskId, MMUILabel, NSString, RichTextView, UISwitch;
@protocol MMFinderLiveGiftWallSettingViewDelegate;

@interface MMFinderLiveGiftWallSettingView : UIView
{
    MMFinderLiveTaskId *_taskId;
    MMUILabel *_titleLabel;
    UIView *_topSeparatorLine;
    MMUILabel *_switchTitleLabel;
    UISwitch *_settingSwitch;
    UIView *_footerSeparatorLine;
    RichTextView *_descLabel;
    id <MMFinderLiveGiftWallSettingViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMFinderLiveGiftWallSettingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) RichTextView *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIView *footerSeparatorLine; // @synthesize footerSeparatorLine=_footerSeparatorLine;
@property(retain, nonatomic) UISwitch *settingSwitch; // @synthesize settingSwitch=_settingSwitch;
@property(retain, nonatomic) MMUILabel *switchTitleLabel; // @synthesize switchTitleLabel=_switchTitleLabel;
@property(retain, nonatomic) UIView *topSeparatorLine; // @synthesize topSeparatorLine=_topSeparatorLine;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)setGiftWallEnabled:(_Bool)arg1;
- (void)onSwitchChanged:(id)arg1;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1 taskId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

