//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMEasterEggNewYearActivityInfo, MMEasterEggNewYearActivityMaterialInfo, MMEasterEggNewYearActivityReportObject, MMUILabel, MMWebImageView, NSString, UIButton, UIImageView, WCPlayerConfigControlView, WCPlayerHttpMediaWrap, WCPlayerPlayArgs, WCPlayerView;
@protocol MMEasterEggNewYearActivityCardViewDelegate;

@interface MMEasterEggNewYearActivityCardView : UIView
{
    _Bool _buttonEnabled;
    id <MMEasterEggNewYearActivityCardViewDelegate> _delegate;
    MMEasterEggNewYearActivityInfo *_activityInfo;
    MMEasterEggNewYearActivityMaterialInfo *_materialInfo;
    MMEasterEggNewYearActivityReportObject *_reportObject;
    NSString *_buttonTitle;
    UIView *_contentView;
    UIImageView *_backgroundImageView;
    MMWebImageView *_brandLogoImageView;
    MMUILabel *_brandNameLabel;
    MMUILabel *_titleLabel;
    MMUILabel *_subtitleLabel;
    MMWebImageView *_creativeImageView;
    MMUILabel *_moneyAmountLabel;
    MMUILabel *_moneyMeasureLabel;
    UIButton *_actionButton;
    WCPlayerView *_creativeVideoView;
    WCPlayerConfigControlView *_creativeVideoControlView;
    WCPlayerPlayArgs *_creativeVideoPlayerInfo;
    WCPlayerHttpMediaWrap *_creativeVideoMediaWrap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPlayerHttpMediaWrap *creativeVideoMediaWrap; // @synthesize creativeVideoMediaWrap=_creativeVideoMediaWrap;
@property(retain, nonatomic) WCPlayerPlayArgs *creativeVideoPlayerInfo; // @synthesize creativeVideoPlayerInfo=_creativeVideoPlayerInfo;
@property(nonatomic) __weak WCPlayerConfigControlView *creativeVideoControlView; // @synthesize creativeVideoControlView=_creativeVideoControlView;
@property(nonatomic) __weak WCPlayerView *creativeVideoView; // @synthesize creativeVideoView=_creativeVideoView;
@property(nonatomic) __weak UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak MMUILabel *moneyMeasureLabel; // @synthesize moneyMeasureLabel=_moneyMeasureLabel;
@property(nonatomic) __weak MMUILabel *moneyAmountLabel; // @synthesize moneyAmountLabel=_moneyAmountLabel;
@property(nonatomic) __weak MMWebImageView *creativeImageView; // @synthesize creativeImageView=_creativeImageView;
@property(nonatomic) __weak MMUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) __weak MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak MMUILabel *brandNameLabel; // @synthesize brandNameLabel=_brandNameLabel;
@property(nonatomic) __weak MMWebImageView *brandLogoImageView; // @synthesize brandLogoImageView=_brandLogoImageView;
@property(nonatomic) __weak UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(nonatomic) _Bool buttonEnabled; // @synthesize buttonEnabled=_buttonEnabled;
@property(retain, nonatomic) MMEasterEggNewYearActivityReportObject *reportObject; // @synthesize reportObject=_reportObject;
@property(retain, nonatomic) MMEasterEggNewYearActivityMaterialInfo *materialInfo; // @synthesize materialInfo=_materialInfo;
@property(retain, nonatomic) MMEasterEggNewYearActivityInfo *activityInfo; // @synthesize activityInfo=_activityInfo;
@property(nonatomic) __weak id <MMEasterEggNewYearActivityCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTapActionButton;
- (id)createPlayerInfoFromMediaWrap:(id)arg1;
- (id)createMediaWrapFromURL:(id)arg1;
- (id)createPlayerConfig;
- (void)closeViewController;
- (void)resumeVideoIfNeeded;
- (void)pauseVideoIfNeeded;
- (void)didShow;
- (double)estimatedHeight;
- (void)layoutSubviews;
- (void)setupActionButton;
- (void)setupCreativeView;
- (void)setupTitleAndSubtitle;
- (void)setupBrandHeader;
- (void)transformButtonToOpenMoneyStyle;
- (id)initWithFrame:(struct CGRect)arg1;

@end

