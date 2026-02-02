//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinancialInfo, UIButton;
@protocol WCPayLQTTipsPanelViewDelegate><WCPayWebImageViewDelegate;

@interface WCPayLQTTipsPanelView : UIView
{
    FinancialInfo *_financialInfo;
    id <WCPayLQTTipsPanelViewDelegate><WCPayWebImageViewDelegate> _delegate;
    UIView *_backgroundView;
    UIView *_contentView;
    UIButton *_backButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <WCPayLQTTipsPanelViewDelegate><WCPayWebImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FinancialInfo *financialInfo; // @synthesize financialInfo=_financialInfo;
- (void)updateFinancialInfoData:(id)arg1;
- (void)onStaticVideoThumbImageTap;
- (void)onVideoFeedThumbImageTap;
- (_Bool)isPureTextHalfPage;
- (void)dismiss;
- (void)confirmBtnClick;
- (void)handleTap;
- (void)showInView:(id)arg1;
- (double)layoutBottomTips;
- (double)layoutVideoFeedWithY:(double)arg1;
- (double)layoutStaticVideoWithY:(double)arg1;
- (double)layoutPureTextContentWithY:(double)arg1 Height:(double)arg2;
- (void)layoutHeader:(id)arg1;
- (void)layoutContent;
- (double)getContentViewHeight;
- (void)onClickBackButton;
- (void)setupContentView;
- (id)initTipsPanelViewWithDelegate:(id)arg1 lqtFinancialInfoData:(id)arg2;

@end

