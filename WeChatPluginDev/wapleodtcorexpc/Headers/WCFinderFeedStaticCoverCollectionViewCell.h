//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSIndexPath, NSString, RichTextView, UIAccessibilityElement, UIButton, UIColor, UIImage, UIImageView, UILabel, UILongPressGestureRecognizer, UIView, WCFinderFeedContentVM, WCFinderFeedLBSRecommendReasonView, WCFinderFeedMediaWrap, WCFinderFeedStaticCoverContactView, WCFinderFeedStaticCoverView, WCFinderMaskButton, WCFinderPageControl, WCFinderSimplePlayerView, WCFinderStaticCoverCollectionViewCellConfig, WCFinderStreamCellUploadStatusView;
@protocol WCFinderFeedStaticCoverCollectionViewCellDataSource, WCFinderFeedStaticCoverCollectionViewCellDelegate;

@interface WCFinderFeedStaticCoverCollectionViewCell : UICollectionViewCell
{
    _Bool _isSelected;
    id <WCFinderFeedStaticCoverCollectionViewCellDelegate> _delegate;
    id <WCFinderFeedStaticCoverCollectionViewCellDataSource> _dataSource;
    double _contactPadding;
    double _descriptionPadding;
    WCFinderFeedContentVM *_contentVM;
    NSString *_accessibilityPrefix;
    unsigned long long _menuItemFlag;
    unsigned long long _menuItemStyle;
    NSIndexPath *_indexPath;
    WCFinderStaticCoverCollectionViewCellConfig *_coverConfig;
    WCFinderFeedStaticCoverView *_coverView;
    WCFinderFeedStaticCoverContactView *_contactView;
    RichTextView *_descLabel;
    UILabel *_postTimeLabel;
    WCFinderFeedMediaWrap *_mediaWrap;
    WCFinderPageControl *_pageCtrl;
    UIView *_oMaskView;
    UILabel *_maskTipsLabel;
    UIImageView *_maskIconView;
    WCFinderStreamCellUploadStatusView *_uploadStatusView;
    unsigned long long _styleMode;
    UIImage *_snapshotImage;
    UIImage *_fullScreenImage;
    WCFinderMaskButton *_followReccommendReasonBtn;
    RichTextView *_innerReccommendReasonLabel;
    WCFinderSimplePlayerView *_playerView;
    unsigned long long _autoPlayStartTime;
    WCFinderFeedLBSRecommendReasonView *_lbsRecommendReasonTitle;
    WCFinderFeedLBSRecommendReasonView *_lbsRecommendReasonSummary;
    UIButton *_leftTopBadge;
    UIView *_markSelectedView;
    UIImageView *_markSelectedImageView;
    UILongPressGestureRecognizer *_longPressGesture;
    UIAccessibilityElement *_cellAccesibilityElement;
}

+ (void)resignMenuFirstResponderCell:(id)arg1;
+ (id)descContentWithContentVM:(id)arg1;
+ (id)descLabelFontWithConfig:(id)arg1;
+ (double)descHeightWith:(id)arg1 width:(double)arg2 config:(id)arg3;
+ (double)cellHeightWith:(id)arg1 width:(double)arg2 config:(id)arg3;
+ (id)followReasonFont;
+ (_Bool)showInnerReasonStateWithContentVM:(id)arg1;
+ (_Bool)showFollowReasonStateWithContentVM:(id)arg1 flag:(unsigned long long)arg2;
+ (id)pageCtrlStyleConfig;
+ (double)pageCtrlHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIAccessibilityElement *cellAccesibilityElement; // @synthesize cellAccesibilityElement=_cellAccesibilityElement;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(retain, nonatomic) UIImageView *markSelectedImageView; // @synthesize markSelectedImageView=_markSelectedImageView;
@property(retain, nonatomic) UIView *markSelectedView; // @synthesize markSelectedView=_markSelectedView;
@property(retain, nonatomic) UIButton *leftTopBadge; // @synthesize leftTopBadge=_leftTopBadge;
@property(retain, nonatomic) WCFinderFeedLBSRecommendReasonView *lbsRecommendReasonSummary; // @synthesize lbsRecommendReasonSummary=_lbsRecommendReasonSummary;
@property(retain, nonatomic) WCFinderFeedLBSRecommendReasonView *lbsRecommendReasonTitle; // @synthesize lbsRecommendReasonTitle=_lbsRecommendReasonTitle;
@property(nonatomic) unsigned long long autoPlayStartTime; // @synthesize autoPlayStartTime=_autoPlayStartTime;
@property(retain, nonatomic) WCFinderSimplePlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) RichTextView *innerReccommendReasonLabel; // @synthesize innerReccommendReasonLabel=_innerReccommendReasonLabel;
@property(retain, nonatomic) WCFinderMaskButton *followReccommendReasonBtn; // @synthesize followReccommendReasonBtn=_followReccommendReasonBtn;
@property(retain, nonatomic) UIImage *fullScreenImage; // @synthesize fullScreenImage=_fullScreenImage;
@property(retain, nonatomic) UIImage *snapshotImage; // @synthesize snapshotImage=_snapshotImage;
@property(nonatomic) unsigned long long styleMode; // @synthesize styleMode=_styleMode;
@property(retain, nonatomic) WCFinderStreamCellUploadStatusView *uploadStatusView; // @synthesize uploadStatusView=_uploadStatusView;
@property(retain, nonatomic) UIImageView *maskIconView; // @synthesize maskIconView=_maskIconView;
@property(retain, nonatomic) UILabel *maskTipsLabel; // @synthesize maskTipsLabel=_maskTipsLabel;
@property(retain, nonatomic) UIView *oMaskView; // @synthesize oMaskView=_oMaskView;
@property(retain, nonatomic) WCFinderPageControl *pageCtrl; // @synthesize pageCtrl=_pageCtrl;
@property(retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(retain, nonatomic) UILabel *postTimeLabel; // @synthesize postTimeLabel=_postTimeLabel;
@property(retain, nonatomic) RichTextView *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) WCFinderFeedStaticCoverContactView *contactView; // @synthesize contactView=_contactView;
@property(retain, nonatomic) WCFinderFeedStaticCoverView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) WCFinderStaticCoverCollectionViewCellConfig *coverConfig; // @synthesize coverConfig=_coverConfig;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) unsigned long long menuItemStyle; // @synthesize menuItemStyle=_menuItemStyle;
@property(nonatomic) unsigned long long menuItemFlag; // @synthesize menuItemFlag=_menuItemFlag;
@property(retain, nonatomic) NSString *accessibilityPrefix; // @synthesize accessibilityPrefix=_accessibilityPrefix;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) double descriptionPadding; // @synthesize descriptionPadding=_descriptionPadding;
@property(nonatomic) double contactPadding; // @synthesize contactPadding=_contactPadding;
@property(nonatomic) __weak id <WCFinderFeedStaticCoverCollectionViewCellDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <WCFinderFeedStaticCoverCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onDelete;
- (void)onEditTag;
- (void)onForward;
- (void)onMutiSeleted;
- (void)onRemove;
- (void)onAnchor;
- (void)longSingleFingerPressGes:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)contentMediaDidEndPlay:(id)arg1;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)reportCellAutoPlayPauseOrStopEvent;
- (void)recordAutoPlayBeforePauseOrStop;
- (struct CGRect)autoPlayPlayerArea;
- (_Bool)shouldPreventAutoPlay;
- (_Bool)isPlaying;
- (void)pause;
- (void)stop;
- (void)play;
- (unsigned long long)autoPlayCellType;
- (void)doShareAnimation;
- (id)cellIdentifier;
- (id)transitionEndImage;
- (struct CGRect)transitionStartImageRectInView:(id)arg1 willPresent:(_Bool)arg2;
- (id)transitionStartImage;
- (void)onClickPrivateMsgAction;
- (void)switchUIMode:(unsigned long long)arg1;
- (void)startLiveAnimation;
- (void)updateAccessibilityLabel;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)onFeedContent:(id)arg1 changeUploadStatus:(id)arg2;
- (void)onFeedContent:(id)arg1 privateStateChange:(_Bool)arg2;
- (void)onFeedContent:(id)arg1 commentDataChanged:(id)arg2;
- (void)onFeedContentStickyTopStatueChanged:(id)arg1;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (void)onFeedContentUserFollowStateChanged:(id)arg1;
- (void)onClickLabel:(id)arg1;
- (void)prepareForLiveMorphTransition;
- (void)updateInfoView;
- (void)clickContact;
- (void)adjustMarginAndHeight;
- (void)setCoverViewCornerRadius:(double)arg1;
- (void)setFixedCoverSize:(struct CGSize)arg1;
- (void)layoutMaskViews;
- (void)updateMaskTipsViews:(id)arg1 tipsIcon:(id)arg2 showProgress:(_Bool)arg3;
- (_Bool)showMaskUploadFailedState;
- (_Bool)showMaskUploadingState;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)startPopUpAnimation:(id)arg1 originScale:(double)arg2;
- (void)updateSelectView;
- (void)toggleSelection;
- (id)followRecommentReasonColorWithContentVM:(id)arg1;
- (void)updateContentWith:(id)arg1 cellConfig:(id)arg2 selectable:(_Bool)arg3;
- (void)updateContentWith:(id)arg1 cellConfig:(id)arg2;
- (_Bool)isCoverLoaded;
- (void)setCoverRenderReporter:(CDUnknownBlockType)arg1;
- (id)ensureMaskIconView:(_Bool)arg1;
@property(retain, nonatomic) UIColor *coverBGColor;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)initSubviews;
@property(nonatomic) _Bool needCornerRadius;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)getGeneralMonitorCellBizId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

