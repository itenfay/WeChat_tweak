//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveEditImagePreviewPageSheetModel, MMPageSheetAdapter, MMUILabel, NSString, RichTextView, UIImageView, UILabel, WCFinderAuthInfoIconView, WCFinderHeadImageView, WCFinderLiveNowView;

@interface MMFinderLiveEditImagePreviewPageSheet : UIView
{
    _Bool _isOpening;
    MMFinderLiveEditImagePreviewPageSheetModel *_model;
    UIView *_contentView;
    double _maxHeight;
    MMPageSheetAdapter *_pageSheetAdapter;
    MMUILabel *_leftSubTitleLabel;
    MMUILabel *_rightSubTitleLabel;
    UIImageView *_coverForShareCardImageView;
    UIImageView *_coverForSquareImageView;
    WCFinderLiveNowView *_liveNowView;
    UIView *_authorView;
    UIView *_avatorContainer;
    WCFinderHeadImageView *_avatorImageView;
    RichTextView *_nicknameTV;
    WCFinderAuthInfoIconView *_authInfoIconView;
    UILabel *_audienceNumLabel;
    UIImageView *_gradientViewForSquare;
    UIImageView *_gradientViewForShare;
    UIImageView *_finderIconImageView;
    RichTextView *_nicknameTVForShare;
    WCFinderAuthInfoIconView *_authInfoIconViewForShare;
    RichTextView *_mediaTitleTextViewForShare;
    RichTextView *_mediaTitleTextViewForSquare;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *mediaTitleTextViewForSquare; // @synthesize mediaTitleTextViewForSquare=_mediaTitleTextViewForSquare;
@property(retain, nonatomic) RichTextView *mediaTitleTextViewForShare; // @synthesize mediaTitleTextViewForShare=_mediaTitleTextViewForShare;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconViewForShare; // @synthesize authInfoIconViewForShare=_authInfoIconViewForShare;
@property(retain, nonatomic) RichTextView *nicknameTVForShare; // @synthesize nicknameTVForShare=_nicknameTVForShare;
@property(retain, nonatomic) UIImageView *finderIconImageView; // @synthesize finderIconImageView=_finderIconImageView;
@property(retain, nonatomic) UIImageView *gradientViewForShare; // @synthesize gradientViewForShare=_gradientViewForShare;
@property(retain, nonatomic) UIImageView *gradientViewForSquare; // @synthesize gradientViewForSquare=_gradientViewForSquare;
@property(retain, nonatomic) UILabel *audienceNumLabel; // @synthesize audienceNumLabel=_audienceNumLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(retain, nonatomic) RichTextView *nicknameTV; // @synthesize nicknameTV=_nicknameTV;
@property(retain, nonatomic) WCFinderHeadImageView *avatorImageView; // @synthesize avatorImageView=_avatorImageView;
@property(retain, nonatomic) UIView *avatorContainer; // @synthesize avatorContainer=_avatorContainer;
@property(retain, nonatomic) UIView *authorView; // @synthesize authorView=_authorView;
@property(retain, nonatomic) WCFinderLiveNowView *liveNowView; // @synthesize liveNowView=_liveNowView;
@property(retain, nonatomic) UIImageView *coverForSquareImageView; // @synthesize coverForSquareImageView=_coverForSquareImageView;
@property(retain, nonatomic) UIImageView *coverForShareCardImageView; // @synthesize coverForShareCardImageView=_coverForShareCardImageView;
@property(retain, nonatomic) MMUILabel *rightSubTitleLabel; // @synthesize rightSubTitleLabel=_rightSubTitleLabel;
@property(retain, nonatomic) MMUILabel *leftSubTitleLabel; // @synthesize leftSubTitleLabel=_leftSubTitleLabel;
@property(retain, nonatomic) MMPageSheetAdapter *pageSheetAdapter; // @synthesize pageSheetAdapter=_pageSheetAdapter;
@property(readonly, nonatomic) _Bool isOpening; // @synthesize isOpening=_isOpening;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveEditImagePreviewPageSheetModel *model; // @synthesize model=_model;
- (double)pageSheetContentHeight;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (void)closeWithAnimation:(_Bool)arg1;
- (void)openWithAnimation:(_Bool)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)updatePageSheetModel:(id)arg1;
- (id)genNickNameTextView;
- (id)buildSubTitleLabel;
- (double)targetCoverImageViewHeight:(double)arg1 ratio:(double)arg2;
- (double)squareImageWidthWithViewWidth:(double)arg1;
- (double)shareCardImageWidth;
- (double)targetCoverImageViewWidth:(double)arg1;
- (void)layoutBottomSubView;
- (void)layoutImageViews;
- (void)layoutSubviews;
- (void)relayoutNickname;
- (void)setupWithBottomSafeArea:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 bottomSafeAreaHeight:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

