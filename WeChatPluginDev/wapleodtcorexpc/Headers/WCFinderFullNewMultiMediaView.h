//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMTimer, NSHashTable, NSString, PicStats, UIColor, UIImage, WCFinderBGMPlayer, WCFinderDataItem, WCFinderFeedBottomRedPacketView, WCFinderFeedContentVM, WCFinderPageControl, WCFinderPinchContentView, WCFinderPinchLogicScrollView, WCFinderProgressBarStatusInfo;
@protocol WCFinderFeedContentMediaActionProtocol, WCFinderFullNewMultiMediaViewDelegate, WCFinderHalfScreenListenProtocol;

@interface WCFinderFullNewMultiMediaView : UIView
{
    _Bool _selectEnable;
    _Bool _hiddenDefaultBackground;
    _Bool _lastPhotoScrollByTimer;
    _Bool _isSubScene;
    id <WCFinderFeedContentMediaActionProtocol> _delegate;
    id <WCFinderFullNewMultiMediaViewDelegate> _postDelegate;
    id <WCFinderHalfScreenListenProtocol> _halfScreenDelegate;
    WCFinderPinchContentView *_mediaCollectionView;
    WCFinderPageControl *_pageCtrl;
    WCFinderFeedBottomRedPacketView *_bottomRedPacketView;
    WCFinderFeedContentVM *_contentVM;
    UIColor *_videoBackgroundColor;
    unsigned long long _currentPage;
    CAGradientLayer *_bottomGradientLayer;
    NSHashTable *_hiddenOnHalfHashTable;
    WCFinderProgressBarStatusInfo *_progressBarStatusForReuse;
    UIImage *_tmpThumbImage;
    MMTimer *_collectionShufflingTimer;
    WCFinderBGMPlayer *_bgmPlayer;
    double _loadingTopOffset;
    MMTimer *_browseDurationTimer;
    MMTimer *_autoPauseDurationTimer;
    unsigned long long _lastPhotoIndex;
    unsigned long long _lastPhotoShowTimestamp;
    PicStats *_picStats;
    WCFinderPinchLogicScrollView *_contentPinchScrollView;
    struct CGSize _mediaSize;
    struct CGSize _playerSize;
    struct CGSize _mediaScalingSize;
}

+ (double)bottomProgressBlankHeight;
+ (_Bool)isHiddenOriginalContactWithContentVM:(id)arg1;
+ (id)mediaWithContentVM:(id)arg1 width:(double)arg2 height:(double)arg3 currentSelectIndex:(unsigned long long)arg4 isSubScene:(_Bool)arg5 delegate:(id)arg6 halfScreenDelegate:(id)arg7;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderPinchLogicScrollView *contentPinchScrollView; // @synthesize contentPinchScrollView=_contentPinchScrollView;
@property(retain, nonatomic) PicStats *picStats; // @synthesize picStats=_picStats;
@property(nonatomic) _Bool isSubScene; // @synthesize isSubScene=_isSubScene;
@property(nonatomic) unsigned long long lastPhotoShowTimestamp; // @synthesize lastPhotoShowTimestamp=_lastPhotoShowTimestamp;
@property(nonatomic) unsigned long long lastPhotoIndex; // @synthesize lastPhotoIndex=_lastPhotoIndex;
@property(nonatomic) _Bool lastPhotoScrollByTimer; // @synthesize lastPhotoScrollByTimer=_lastPhotoScrollByTimer;
@property(retain, nonatomic) MMTimer *autoPauseDurationTimer; // @synthesize autoPauseDurationTimer=_autoPauseDurationTimer;
@property(retain, nonatomic) MMTimer *browseDurationTimer; // @synthesize browseDurationTimer=_browseDurationTimer;
@property(nonatomic) double loadingTopOffset; // @synthesize loadingTopOffset=_loadingTopOffset;
@property(retain, nonatomic) WCFinderBGMPlayer *bgmPlayer; // @synthesize bgmPlayer=_bgmPlayer;
@property(retain, nonatomic) MMTimer *collectionShufflingTimer; // @synthesize collectionShufflingTimer=_collectionShufflingTimer;
@property(retain, nonatomic) UIImage *tmpThumbImage; // @synthesize tmpThumbImage=_tmpThumbImage;
@property(retain, nonatomic) WCFinderProgressBarStatusInfo *progressBarStatusForReuse; // @synthesize progressBarStatusForReuse=_progressBarStatusForReuse;
@property(nonatomic) struct CGSize mediaScalingSize; // @synthesize mediaScalingSize=_mediaScalingSize;
@property(nonatomic) struct CGSize playerSize; // @synthesize playerSize=_playerSize;
@property(retain, nonatomic) NSHashTable *hiddenOnHalfHashTable; // @synthesize hiddenOnHalfHashTable=_hiddenOnHalfHashTable;
@property(nonatomic) __weak CAGradientLayer *bottomGradientLayer; // @synthesize bottomGradientLayer=_bottomGradientLayer;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) UIColor *videoBackgroundColor; // @synthesize videoBackgroundColor=_videoBackgroundColor;
@property(nonatomic) _Bool hiddenDefaultBackground; // @synthesize hiddenDefaultBackground=_hiddenDefaultBackground;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) WCFinderFeedBottomRedPacketView *bottomRedPacketView; // @synthesize bottomRedPacketView=_bottomRedPacketView;
@property(nonatomic) struct CGSize mediaSize; // @synthesize mediaSize=_mediaSize;
@property(retain, nonatomic) WCFinderPageControl *pageCtrl; // @synthesize pageCtrl=_pageCtrl;
@property(retain, nonatomic) WCFinderPinchContentView *mediaCollectionView; // @synthesize mediaCollectionView=_mediaCollectionView;
@property(nonatomic) _Bool selectEnable; // @synthesize selectEnable=_selectEnable;
@property(nonatomic) __weak id <WCFinderHalfScreenListenProtocol> halfScreenDelegate; // @synthesize halfScreenDelegate=_halfScreenDelegate;
@property(nonatomic) __weak id <WCFinderFullNewMultiMediaViewDelegate> postDelegate; // @synthesize postDelegate=_postDelegate;
@property(nonatomic) __weak id <WCFinderFeedContentMediaActionProtocol> delegate; // @synthesize delegate=_delegate;
- (double)getCurMediaVisualWidHeightRatio;
- (void)halfScreenShowStateChanged;
- (void)_notifyHalfScreenProgressChangedIndexPath:(id)arg1;
- (void)halfScreenMoveProgressChanged;
- (void)onBGMPlayerProgressChanged:(id)arg1;
- (void)onBGMPlayerDidPause:(id)arg1;
- (void)onBGMPlayerDidPlay:(id)arg1;
- (void)onBGMPlayerPlayToEnd:(id)arg1;
- (id)currentPageMediaInfoHashKey;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)pinchScrollViewDidZoom:(id)arg1;
- (id)finderPinchScrollViewGetContentView;
- (void)unifiedURLIfNeeded:(id)arg1;
- (id)currentContentMediaCell;
- (void)restoreMinimizeContentView:(id)arg1 forPlay:(_Bool)arg2;
- (CDUnknownBlockType)bgmPlayerGenerator;
- (void)restorePlayerViewForLandscapeAnimation:(id)arg1;
- (id)extractPlayerViewForLandscapeAnimation;
- (id)minimizeContentView:(_Bool)arg1;
- (id)playerMeidaWrapIdentifier;
- (_Bool)currentMediaIsMute;
- (id)currentMediaUnSupportPlayToast;
- (_Bool)isCurrentMediaSupportPlay;
- (_Bool)currentMediaIsPlay;
- (_Bool)mediaIsOnPlay;
- (_Bool)collectionViewIsOnScrollState;
- (void)stopScroll;
- (void)startAutoPauseTimerCheck;
- (void)startBrowseTimerCheck;
- (void)startScroll;
- (void)pauseBGMPlay;
- (_Bool)stopBGMPlay;
- (_Bool)startBGMPlay;
- (void)muteBGMPlay:(_Bool)arg1;
- (void)updateCollectionViewCurrentCellPlayStateIfVideo;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)photoSessionReportIndex:(long long)arg1;
- (id)genPicStats;
- (void)addPhotoSession_2:(long long)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onLongPressMedia;
- (void)didRotateToLandscape;
- (void)didResetToPortrait;
- (void)resetContentPinchScrollView;
- (_Bool)isMediaContentReady;
- (id)liveCell;
- (id)playerView;
- (void)setPlayRate:(double)arg1;
- (void)updateCurrentVideoThumb;
- (id)getPhotoThumbImage;
- (id)getCurCollectionViewCellRetryStateImageView;
- (id)snapshotImageForMedia;
- (void)updateVideoSnapshot;
- (id)snapshotViewForMeida;
- (id)getCurrendThumb;
- (void)resetCurrentVideoThumb;
- (void)setProgressBarStatus:(id)arg1;
- (id)progressBarStatus;
- (id)playSecondSet;
- (double)getActualPlayingTimeInMs;
- (double)getPlayVideoTotalTime;
- (unsigned long long)getPreloadTaskStatus;
- (double)getCurrentPlayVideoTime;
- (void)changeVideoSilenceStatue:(_Bool)arg1;
- (void)progressBarValueChange:(double)arg1 playVideo:(_Bool)arg2 pauseVideo:(_Bool)arg3 state:(struct WCFinderPlayerControlProgressState)arg4;
- (void)tryDowngradePlayVideoIfSupport;
- (void)stopVideoIfSupport;
- (void)fakeStopPlayAction;
- (void)pauseVideoIfSupport:(_Bool)arg1;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(_Bool)arg2 pauseVideo:(_Bool)arg3;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(_Bool)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onPageCtrlValueChange;
- (CDUnknownBlockType)bgmPlayerCreator;
- (void)resetBGMPlay;
- (void)resetReuseState;
- (struct CGSize)contentSizeForMediaInfo:(id)arg1 useMediaScalingInfo:(_Bool)arg2 isSubScene:(_Bool)arg3;
- (void)layoutSubviews;
- (void)layoutMediaCollectionView;
- (_Bool)isInGesturePinchState;
- (void)playerRenderSucAsSize:(struct CGSize)arg1;
- (void)initSubView;
- (void)onCollectionViewTriggerShufflingLogic;
- (_Bool)shouldTriggerShufflingLogic;
- (void)resetCollectionAutoPauseDurationTimer;
- (void)resetCollectionBrowseTimer;
- (void)resetCollectionShufflingTimer;
- (void)onCollectionViewBrowseLongTimeTypePause;
- (void)onCollectionViewBrowseLongTimeTypeFollow;
- (void)restartCollectionViewShufflingTimerWithTimeInterval:(long long)arg1;
- (void)restartCollectionViewShufflingTimer;
@property(readonly, nonatomic) WCFinderDataItem *dataItem;
- (void)updateBottomRedPacket;
- (_Bool)_canShowRedPackageJumpInfoBanner;
- (void)changeDataWithContentVM:(id)arg1 currentSelectIndex:(unsigned long long)arg2 useTmpThumbImage:(id)arg3 isSubScene:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1 contentVM:(id)arg2 currentSelectIndex:(unsigned long long)arg3 isSubScene:(_Bool)arg4 delegate:(id)arg5 halfScreenDelegate:(id)arg6;
- (_Bool)isAccessibilityElement;
- (struct CGRect)mediaFrameForContentVM:(id)arg1 width:(double)arg2 height:(double)arg3 isSubScene:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

