//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class BTRichTextTagView, BizProfileV2Resp, BrandLiveStatusButton, BrandProfileReserveFinderLiveCardView, BrandProfileRichTextTagView, BrandShopWindowButton, CContact, MMBrandHeadImageView, MMUIButton, MMUIImageView, MMUILabel, NSString, UIImageView, WCFinderMaskButton, _TtC6WeChat25BrandProfileMenuViewModel, _TtC6WeChat36BrandProfileRecommendFollowViewModel;
@protocol BrandProfileHeaderViewDelegate;

@interface BrandProfileHeaderView : UIView
{
    CContact *_brandContact;
    _Bool _isForceButtonHidden;
    _Bool _isBrandLiving;
    _Bool _bNameInteractive;
    _Bool _shouldShowFriendSubscribeBtn;
    _Bool _unvisibleInScrollView;
    _Bool _shouldShowRecommendFollowView;
    _Bool _waitToShowRecommendFollowView;
    _Bool _lastHasStar;
    id <BrandProfileHeaderViewDelegate> _delegate;
    BizProfileV2Resp *_cacheItem;
    MMBrandHeadImageView *_brandAvatarView;
    BrandProfileRichTextTagView *_nameLabel;
    BTRichTextTagView *_descButton;
    WCFinderMaskButton *_focusButton;
    WCFinderMaskButton *_enterButton;
    WCFinderMaskButton *_unfocusButton;
    UIImageView *_unfocusButtonDownArrow;
    UIImageView *_unfocusButtonStar;
    UIImageView *_startImageView;
    MMUILabel *_overviewLabel;
    MMUILabel *_ipInfoLabel;
    MMUIButton *_finderButton;
    BrandLiveStatusButton *_liveButton;
    BrandProfileReserveFinderLiveCardView *_reserveLiveCard;
    BrandShopWindowButton *_shopWindowButton;
    UIImageView *_shopWindowButtonTailIcon;
    _TtC6WeChat36BrandProfileRecommendFollowViewModel *_recommendFollowViewModel;
    UIView *_recommendFollowView;
    _TtC6WeChat25BrandProfileMenuViewModel *_menuViewModel;
    UIView *_menuView;
    MMUIButton *_friendSubscribeButton;
    MMUILabel *_certificationStr;
    MMUIImageView *_certificationIcon;
    MMUIButton *_searchView;
    MMUIButton *_moreView;
    NSString *_nameLabelStr;
    double _nicknameLabelWidth;
    NSString *_lastSignatureStr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastSignatureStr; // @synthesize lastSignatureStr=_lastSignatureStr;
@property(nonatomic) _Bool lastHasStar; // @synthesize lastHasStar=_lastHasStar;
@property(nonatomic) double nicknameLabelWidth; // @synthesize nicknameLabelWidth=_nicknameLabelWidth;
@property(copy, nonatomic) NSString *nameLabelStr; // @synthesize nameLabelStr=_nameLabelStr;
@property(retain, nonatomic) MMUIButton *moreView; // @synthesize moreView=_moreView;
@property(retain, nonatomic) MMUIButton *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) MMUIImageView *certificationIcon; // @synthesize certificationIcon=_certificationIcon;
@property(retain, nonatomic) MMUILabel *certificationStr; // @synthesize certificationStr=_certificationStr;
@property(retain, nonatomic) MMUIButton *friendSubscribeButton; // @synthesize friendSubscribeButton=_friendSubscribeButton;
@property(retain, nonatomic) UIView *menuView; // @synthesize menuView=_menuView;
@property(retain, nonatomic) _TtC6WeChat25BrandProfileMenuViewModel *menuViewModel; // @synthesize menuViewModel=_menuViewModel;
@property(nonatomic) _Bool waitToShowRecommendFollowView; // @synthesize waitToShowRecommendFollowView=_waitToShowRecommendFollowView;
@property(retain, nonatomic) UIView *recommendFollowView; // @synthesize recommendFollowView=_recommendFollowView;
@property(retain, nonatomic) _TtC6WeChat36BrandProfileRecommendFollowViewModel *recommendFollowViewModel; // @synthesize recommendFollowViewModel=_recommendFollowViewModel;
@property(nonatomic) _Bool shouldShowRecommendFollowView; // @synthesize shouldShowRecommendFollowView=_shouldShowRecommendFollowView;
@property(nonatomic) _Bool unvisibleInScrollView; // @synthesize unvisibleInScrollView=_unvisibleInScrollView;
@property(retain, nonatomic) UIImageView *shopWindowButtonTailIcon; // @synthesize shopWindowButtonTailIcon=_shopWindowButtonTailIcon;
@property(retain, nonatomic) BrandShopWindowButton *shopWindowButton; // @synthesize shopWindowButton=_shopWindowButton;
@property(retain, nonatomic) BrandProfileReserveFinderLiveCardView *reserveLiveCard; // @synthesize reserveLiveCard=_reserveLiveCard;
@property(retain, nonatomic) BrandLiveStatusButton *liveButton; // @synthesize liveButton=_liveButton;
@property(retain, nonatomic) MMUIButton *finderButton; // @synthesize finderButton=_finderButton;
@property(retain, nonatomic) MMUILabel *ipInfoLabel; // @synthesize ipInfoLabel=_ipInfoLabel;
@property(retain, nonatomic) MMUILabel *overviewLabel; // @synthesize overviewLabel=_overviewLabel;
@property(retain, nonatomic) UIImageView *startImageView; // @synthesize startImageView=_startImageView;
@property(retain, nonatomic) UIImageView *unfocusButtonStar; // @synthesize unfocusButtonStar=_unfocusButtonStar;
@property(retain, nonatomic) UIImageView *unfocusButtonDownArrow; // @synthesize unfocusButtonDownArrow=_unfocusButtonDownArrow;
@property(retain, nonatomic) WCFinderMaskButton *unfocusButton; // @synthesize unfocusButton=_unfocusButton;
@property(retain, nonatomic) WCFinderMaskButton *enterButton; // @synthesize enterButton=_enterButton;
@property(retain, nonatomic) WCFinderMaskButton *focusButton; // @synthesize focusButton=_focusButton;
@property(retain, nonatomic) BTRichTextTagView *descButton; // @synthesize descButton=_descButton;
@property(retain, nonatomic) BrandProfileRichTextTagView *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMBrandHeadImageView *brandAvatarView; // @synthesize brandAvatarView=_brandAvatarView;
@property(nonatomic) _Bool shouldShowFriendSubscribeBtn; // @synthesize shouldShowFriendSubscribeBtn=_shouldShowFriendSubscribeBtn;
@property(nonatomic) _Bool bNameInteractive; // @synthesize bNameInteractive=_bNameInteractive;
@property(nonatomic) _Bool isBrandLiving; // @synthesize isBrandLiving=_isBrandLiving;
@property(nonatomic) _Bool isForceButtonHidden; // @synthesize isForceButtonHidden=_isForceButtonHidden;
@property(retain, nonatomic) BizProfileV2Resp *cacheItem; // @synthesize cacheItem=_cacheItem;
@property(nonatomic) __weak id <BrandProfileHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityElements;
- (id)getNameLabelAccessibilityLabel;
- (void)createShopWindowButtonTailIconIfNeeded;
- (void)createShopWindowButtonIfNeeded;
- (void)onRecommendFollowCellExposed:(id)arg1;
- (void)onRecommendFollowCellClicked:(id)arg1 sessionId:(id)arg2 reportJsonStr:(id)arg3;
- (void)onMoreRecommendFollowClicked:(id)arg1 sessionId:(id)arg2;
- (void)onRecommendFollowDataUpdated:(id)arg1;
- (void)onHalfScreenMoreClick;
- (void)onHalfScreenSearchClick;
- (void)onLiveStatusBtnClicked;
- (void)onNameAreaClicked;
- (void)onFinderButtonClicked;
- (void)onFriendSubscribeBtnClicked;
- (void)onShopWindowButtonClicked;
- (void)onFoldButtonClicked;
- (void)onUnfocusButtonClicked;
- (void)onEnterButtonClicked;
- (void)onFocusButtonClicked;
- (void)onPersonalVerifiedLabelClicked;
- (void)onBrandAvatarClicked;
- (void)onTextTagViewTap:(id)arg1;
- (void)onExpandButtonClicked:(_Bool)arg1;
- (void)onShowMoreNoticeButtonClicked;
- (void)onReserveFinderLiveButtonClicked:(_Bool)arg1;
- (void)onMenuItemClick:(id)arg1;
- (id)getOverviewStringWithSeparator:(id)arg1;
- (void)clearNameInfoCache;
- (_Bool)hasReserveLiveCard;
- (void)livingStatusUpdate;
- (void)focusButtonTitleUsingFocus;
- (void)focusButtonTitleUsingBindDevice;
- (id)getFocusButton;
- (void)setFinderLiveReserved:(_Bool)arg1;
- (void)setBrandContact:(id)arg1;
- (void)scrollView:(id)arg1 onHeaderViewVisibilityChanged:(_Bool)arg2;
- (void)showRecommendFollowViewAnimated;
- (void)updateWidgetLayout;
- (void)updateMenuLayout;
- (struct CGSize)calculateTailIconDisplaySize:(struct CGSize)arg1;
- (void)updateShopWindowButtonInsets:(_Bool)arg1;
- (id)resizeBrandIconImage:(id)arg1 toTargetSize:(struct CGSize)arg2 withColor:(id)arg3;
- (void)updateShopWindowLayout;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateRecommendFollowLayout;
- (void)updateFocusLayout;
- (id)focusTitleString;
- (id)unfocusTitleString;
- (void)updateIntroduceLayout;
- (void)updateAvatarLayout;
- (void)updateHeaderView;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutOtherViews;
- (void)layoutSubviews;
- (void)configureMenuLayout:(id)arg1;
- (void)configureWidgetLayout:(id)arg1;
- (void)configureFocusLayout:(id)arg1;
- (void)configureIntroduceLayout:(id)arg1;
- (void)configureAvatarLayout:(id)arg1;
- (void)configureLayout;
- (void)setupSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

