//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderLiveNoticeInfo, MMFinderLiveNoticePosterModel, MMWebImageView, NSDateFormatter, NSString, UIButton, UIImage, UIImageView, UILabel, WCFinderContact, WCFinderHeadImageView;
@protocol MMFinderLiveNoticeDetailsViewDelegate;

@interface MMFinderLiveNoticeDetailsView : UIView
{
    _Bool _previewBackgroundImageSet;
    _Bool _backgroundImageSettingsButtonHidden;
    id <MMFinderLiveNoticeDetailsViewDelegate> _delegate;
    NSString *_backgroundImageUri;
    UIImage *_previewBackgroundImage;
    WCFinderContact *_anchorContact;
    FinderLiveNoticeInfo *_noticeInfo;
    MMFinderLiveNoticePosterModel *_posterModel;
    NSDateFormatter *_untimedNoticeTimeFormatter;
    unsigned long long _currentStyleIndex;
    unsigned long long _committedStyleIndex;
    UIView *_roundedCornerContainerView;
    UIView *_masterContainerView;
    UIView *_backgroundImageContainer;
    UIImageView *_backgroundImageView;
    UIView *_backgroundImageShadingView;
    UIImageView *_brandLogoView;
    UILabel *_brandLabel;
    UIButton *_backgroundImageSettingsButton;
    WCFinderHeadImageView *_anchorAvatarView;
    UILabel *_anchorDisplayNameLabel;
    MMWebImageView *_anchorVerificationStatusView;
    UILabel *_noticeRecommendationLabel;
    UILabel *_titleLabel;
    UILabel *_introductionLabel;
    UILabel *_subtitleLabel;
    UIView *_qrCodeContainer;
    UIImageView *_qrCodeImageView;
    UILabel *_reserveHintLabel;
    UILabel *_couponLabel;
    UIView *_posterBackgroundImageContainer;
    UIImageView *_posterBackgroundImageView;
    UIView *_posterBackgroundImageShadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *posterBackgroundImageShadingView; // @synthesize posterBackgroundImageShadingView=_posterBackgroundImageShadingView;
@property(retain, nonatomic) UIImageView *posterBackgroundImageView; // @synthesize posterBackgroundImageView=_posterBackgroundImageView;
@property(retain, nonatomic) UIView *posterBackgroundImageContainer; // @synthesize posterBackgroundImageContainer=_posterBackgroundImageContainer;
@property(retain, nonatomic) UILabel *couponLabel; // @synthesize couponLabel=_couponLabel;
@property(retain, nonatomic) UILabel *reserveHintLabel; // @synthesize reserveHintLabel=_reserveHintLabel;
@property(retain, nonatomic) UIImageView *qrCodeImageView; // @synthesize qrCodeImageView=_qrCodeImageView;
@property(retain, nonatomic) UIView *qrCodeContainer; // @synthesize qrCodeContainer=_qrCodeContainer;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *introductionLabel; // @synthesize introductionLabel=_introductionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *noticeRecommendationLabel; // @synthesize noticeRecommendationLabel=_noticeRecommendationLabel;
@property(retain, nonatomic) MMWebImageView *anchorVerificationStatusView; // @synthesize anchorVerificationStatusView=_anchorVerificationStatusView;
@property(retain, nonatomic) UILabel *anchorDisplayNameLabel; // @synthesize anchorDisplayNameLabel=_anchorDisplayNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *anchorAvatarView; // @synthesize anchorAvatarView=_anchorAvatarView;
@property(retain, nonatomic) UIButton *backgroundImageSettingsButton; // @synthesize backgroundImageSettingsButton=_backgroundImageSettingsButton;
@property(retain, nonatomic) UILabel *brandLabel; // @synthesize brandLabel=_brandLabel;
@property(retain, nonatomic) UIImageView *brandLogoView; // @synthesize brandLogoView=_brandLogoView;
@property(retain, nonatomic) UIView *backgroundImageShadingView; // @synthesize backgroundImageShadingView=_backgroundImageShadingView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIView *backgroundImageContainer; // @synthesize backgroundImageContainer=_backgroundImageContainer;
@property(retain, nonatomic) UIView *masterContainerView; // @synthesize masterContainerView=_masterContainerView;
@property(retain, nonatomic) UIView *roundedCornerContainerView; // @synthesize roundedCornerContainerView=_roundedCornerContainerView;
@property(nonatomic) unsigned long long committedStyleIndex; // @synthesize committedStyleIndex=_committedStyleIndex;
@property(nonatomic) unsigned long long currentStyleIndex; // @synthesize currentStyleIndex=_currentStyleIndex;
@property(retain, nonatomic) NSDateFormatter *untimedNoticeTimeFormatter; // @synthesize untimedNoticeTimeFormatter=_untimedNoticeTimeFormatter;
@property(retain, nonatomic) MMFinderLiveNoticePosterModel *posterModel; // @synthesize posterModel=_posterModel;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
@property(retain, nonatomic) WCFinderContact *anchorContact; // @synthesize anchorContact=_anchorContact;
@property(nonatomic) _Bool backgroundImageSettingsButtonHidden; // @synthesize backgroundImageSettingsButtonHidden=_backgroundImageSettingsButtonHidden;
@property(retain, nonatomic) UIImage *previewBackgroundImage; // @synthesize previewBackgroundImage=_previewBackgroundImage;
@property(nonatomic) _Bool previewBackgroundImageSet; // @synthesize previewBackgroundImageSet=_previewBackgroundImageSet;
@property(retain, nonatomic) NSString *backgroundImageUri; // @synthesize backgroundImageUri=_backgroundImageUri;
@property(nonatomic) __weak id <MMFinderLiveNoticeDetailsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isMemberLiveNotice:(id)arg1;
- (void)showBGImageSettingBtnShow:(_Bool)arg1;
- (void)transformMasterContainerToCenter;
- (CDStruct_76c2da79)currentIntroductionTitleLayoutAttributes;
- (CDStruct_76c2da79)currentTitleLayoutAttributes;
- (void)layoutWithoutBackgroundImage;
- (void)layoutWithBackgroundImage;
- (void)configureViewsForShowingBackgroundImage:(_Bool)arg1;
- (void)updateWithNoticeInfo:(id)arg1;
- (void)updateWithPreviewModel:(id)arg1;
- (void)updateWithAnchorFinderContact:(id)arg1;
- (void)configureComponentsStyle;
- (void)initializeComponents;
- (void)onImageSettingsButtonTapped;
- (void)layoutSubviews;
- (void)revertPreviewStyle;
- (void)commitPreviewStyle;
- (void)advancePreviewStyle;
- (id)noticeDetailsImage;
- (void)clearPreviewBackgroundImageWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setPreviewBackgroundImage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setBackgroundImageUri:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)updateWithAnchorFinderContact:(id)arg1 noticeInfo:(id)arg2 posterModel:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)updateWithAnchroFinderContact:(id)arg1 previewModel:(id)arg2 posterModel:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSString *currentStyleId;
@property(readonly, nonatomic) _Bool hasBackgroundImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

