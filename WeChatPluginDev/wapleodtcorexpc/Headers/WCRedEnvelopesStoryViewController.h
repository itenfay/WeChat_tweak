//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, MMUIButton, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UIPageControl, UIPanGestureRecognizer, UIScrollView, UIView, WCPayWebImageView, WCPayWebPagView, WCRedEnvelopesControlData, WCRedEnvelopesStoryDargUtil, WCRedEnvelopesStoryPageView;
@protocol WCRedEnvelopesStoryViewControllerDelegate;

@interface WCRedEnvelopesStoryViewController
{
    WCRedEnvelopesControlData *m_data;
    MMUIButton *m_closeBtn;
    _Bool _canSwipeUp;
    _Bool _isPreviewMode;
    _Bool _isNeedDelayPlayVideo;
    _Bool _isAutoPlayNow;
    _Bool _isMaskViewShouldStop;
    _Bool _bHasAutoMove;
    _Bool _bHasAutoPlay;
    _Bool _isSecondTimeAutoShowStory;
    _Bool _bHasManulTapMute;
    WCRedEnvelopesStoryPageView *_m_redSkinStoryPage;
    UIScrollView *_m_scrollView;
    UIView *_m_scrollViewContentView;
    NSMutableArray *_m_storysArr;
    UIPageControl *_m_pageControl;
    WCPayWebImageView *_m_redSkinCorpLogo;
    UIView *_m_redSkinTitleInfoView;
    UILabel *_m_redSkinDescLabel;
    UIImageView *_m_bottomMaskView;
    WCRedEnvelopesStoryDargUtil *_m_storyDragAnimationUtil;
    id <WCRedEnvelopesStoryViewControllerDelegate> _delegate;
    NSMutableArray *_m_storyPageArr;
    WCPayWebImageView *_m_storyViewMaskView;
    WCPayWebPagView *_m_storyPagView;
    UIButton *_m_enterMPBtn;
    UIImageView *_enterMPBkgView;
    UIPanGestureRecognizer *_panGesture;
    NSString *_sessionId;
    long long _autoPlayInterval;
    long long _firstFramePlayInterval;
    MMTimer *_storyPicTimer;
}

+ (double)getRedSkinBeginY;
+ (_Bool)isNetworkTypeBetter4G;
- (void).cxx_destruct;
@property(nonatomic) _Bool bHasManulTapMute; // @synthesize bHasManulTapMute=_bHasManulTapMute;
@property(nonatomic) _Bool isSecondTimeAutoShowStory; // @synthesize isSecondTimeAutoShowStory=_isSecondTimeAutoShowStory;
@property(retain, nonatomic) MMTimer *storyPicTimer; // @synthesize storyPicTimer=_storyPicTimer;
@property(nonatomic) _Bool bHasAutoPlay; // @synthesize bHasAutoPlay=_bHasAutoPlay;
@property(nonatomic) _Bool bHasAutoMove; // @synthesize bHasAutoMove=_bHasAutoMove;
@property(nonatomic) _Bool isMaskViewShouldStop; // @synthesize isMaskViewShouldStop=_isMaskViewShouldStop;
@property(nonatomic) long long firstFramePlayInterval; // @synthesize firstFramePlayInterval=_firstFramePlayInterval;
@property(nonatomic) long long autoPlayInterval; // @synthesize autoPlayInterval=_autoPlayInterval;
@property(nonatomic) _Bool isAutoPlayNow; // @synthesize isAutoPlayNow=_isAutoPlayNow;
@property(nonatomic) _Bool isNeedDelayPlayVideo; // @synthesize isNeedDelayPlayVideo=_isNeedDelayPlayVideo;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) _Bool isPreviewMode; // @synthesize isPreviewMode=_isPreviewMode;
@property(nonatomic) _Bool canSwipeUp; // @synthesize canSwipeUp=_canSwipeUp;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) UIImageView *enterMPBkgView; // @synthesize enterMPBkgView=_enterMPBkgView;
@property(retain, nonatomic) UIButton *m_enterMPBtn; // @synthesize m_enterMPBtn=_m_enterMPBtn;
@property(retain, nonatomic) WCPayWebPagView *m_storyPagView; // @synthesize m_storyPagView=_m_storyPagView;
@property(retain, nonatomic) WCPayWebImageView *m_storyViewMaskView; // @synthesize m_storyViewMaskView=_m_storyViewMaskView;
@property(retain, nonatomic) NSMutableArray *m_storyPageArr; // @synthesize m_storyPageArr=_m_storyPageArr;
@property(nonatomic) __weak id <WCRedEnvelopesStoryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCRedEnvelopesStoryDargUtil *m_storyDragAnimationUtil; // @synthesize m_storyDragAnimationUtil=_m_storyDragAnimationUtil;
@property(retain, nonatomic) UIImageView *m_bottomMaskView; // @synthesize m_bottomMaskView=_m_bottomMaskView;
@property(retain, nonatomic) UILabel *m_redSkinDescLabel; // @synthesize m_redSkinDescLabel=_m_redSkinDescLabel;
@property(retain, nonatomic) UIView *m_redSkinTitleInfoView; // @synthesize m_redSkinTitleInfoView=_m_redSkinTitleInfoView;
@property(retain, nonatomic) WCPayWebImageView *m_redSkinCorpLogo; // @synthesize m_redSkinCorpLogo=_m_redSkinCorpLogo;
@property(retain, nonatomic) UIPageControl *m_pageControl; // @synthesize m_pageControl=_m_pageControl;
@property(retain, nonatomic) NSMutableArray *m_storysArr; // @synthesize m_storysArr=_m_storysArr;
@property(retain, nonatomic) UIView *m_scrollViewContentView; // @synthesize m_scrollViewContentView=_m_scrollViewContentView;
@property(retain, nonatomic) UIScrollView *m_scrollView; // @synthesize m_scrollView=_m_scrollView;
@property(retain, nonatomic) WCRedEnvelopesStoryPageView *m_redSkinStoryPage; // @synthesize m_redSkinStoryPage=_m_redSkinStoryPage;
- (void)onTapWxAppInfo:(id)arg1;
- (void)setPageControlAndInfoViewAlpha:(double)arg1;
- (void)reportWhenPageReturn;
- (void)onTapMuteBtn:(_Bool)arg1;
- (void)setFrontElementHidden:(_Bool)arg1;
- (void)onLoadWCPayWebImageFail:(id)arg1;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (void)onScrollViewSwipeUp:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setMaskViewAlpha:(double)arg1;
- (void)dealloc;
- (void)playVideoIfNeeded:(_Bool)arg1;
- (void)playVideoIfNeeded;
- (void)setUnMuteIfNeed;
- (void)stopAllVideo;
- (void)viewWillDisappear:(_Bool)arg1;
- (double)getSpaceLabelHeight:(id)arg1 withAttrDict:(id)arg2 withWidth:(double)arg3;
- (void)setMaskViewY:(double)arg1;
- (void)resetAutoPlayElemAlpha;
- (void)onNextStory;
- (void)stopAutoCarousel;
- (void)onPlayerStop;
- (void)autoPlayFirstImageTypeMedia;
- (void)startAutoCarouselTimer;
- (void)setupAutoPlayWithMute:(_Bool)arg1;
- (double)getCurrentViewBeginY;
- (void)reset;
- (void)panGestureRecognize:(id)arg1;
- (void)setCloseBtnHidden:(_Bool)arg1;
- (void)changeRedSkinPageFrame:(struct CGRect)arg1;
- (void)scrollViewDidEndScroll:(struct CGPoint *)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)isNotchScreen;
- (void)onLoadWCPayWebPagOK:(id)arg1;
- (void)prepareForScrollView;
- (void)onJumpAction;
- (void)updateScrollView;
- (void)refreshViewWithData:(id)arg1;
- (void)setupWithData:(id)arg1;
- (void)hideSelf;
- (void)initTopButton;
- (_Bool)shouldAutorotate;
- (void)viewDidLoad;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

