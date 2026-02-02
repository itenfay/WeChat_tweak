//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJTemplatePlayerView, NSMutableArray, NSMutableSet, NSString, PageScrollView, SightAssetPreviewView, SightDraft, UIButton;
@protocol WCMultiImageScannerDelegate;

@interface WCMultiImageScannerController
{
    PageScrollView *_pageScrollView;
    UIButton *_deleteButton;
    NSMutableArray *_arrViewItem;
    unsigned long long _currentIndex;
    _Bool _isComeFromRotate;
    _Bool m_bAnimating;
    SightAssetPreviewView *_sightPlayView;
    id <WCMultiImageScannerDelegate> _scannerDelegate;
    NSMutableSet *_setPreviewItem;
    _Bool _hasDeleteItem;
    NSMutableArray *_originalFrameArr;
    _Bool _isNeedResumeWXMusic;
    _Bool _isNeedResumeFinderMinimize;
    _Bool _isAssetMuted;
    NSString *_audioModuleIdentifier;
    SightDraft *_sightDraft;
    MJTemplatePlayerView *_templatePlayerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJTemplatePlayerView *templatePlayerView; // @synthesize templatePlayerView=_templatePlayerView;
@property(retain, nonatomic) SightDraft *sightDraft; // @synthesize sightDraft=_sightDraft;
@property(nonatomic) __weak id <WCMultiImageScannerDelegate> scannerDelegate; // @synthesize scannerDelegate=_scannerDelegate;
@property(retain, nonatomic) NSMutableArray *arrViewItem; // @synthesize arrViewItem=_arrViewItem;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) PageScrollView *pageScrollView; // @synthesize pageScrollView=_pageScrollView;
- (void)sightAssetPreviewViewPlaybackDidReachEnd:(id)arg1;
- (void)pausePlayingWithPageIndex:(unsigned long long)arg1;
- (void)startPlayingWithPageIndex:(unsigned long long)arg1;
- (void)pauseVideoIfNeeded;
- (void)resumeVideoIfNeeded;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)imageViewModelForPageScrollView:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)pageScrollView:(id)arg1 viewForItem:(unsigned long long)arg2;
- (unsigned long long)numberOfItems:(id)arg1;
- (unsigned long long)currentIndex:(id)arg1;
- (void)onFullScreenItemDidDragToRect:(struct CGRect)arg1;
- (void)onChangedWithCurrentIndex:(long long)arg1;
- (void)onSingleClicked;
- (void)showFullScreenAnimated:(_Bool)arg1;
- (void)UISplitViewWillChangeSplitMode;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)hidesStatusBar;
- (void)didEnterForeground;
- (void)willEnterBackground;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)onAssetImageUpdate:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (void)initTemplatePlayerViewWithCompositeTask:(id)arg1;
- (void)initSightPlayViewWithCompositeTask:(id)arg1;
- (id)initWithSight:(id)arg1 originalCell:(id)arg2;
- (id)initWithViewItems:(id)arg1 currentIndex:(unsigned long long)arg2 originalCell:(id)arg3;
- (void)_tryToUpdatePlayerToMute:(_Bool)arg1;
- (id)_getAudioModuleIdentifier;
- (void)_deactiveAudioModule;
- (void)_activeAudioModule;
- (void)_updateAudioSession;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)onMainWindowFrameChanged;
- (struct CGPoint)contentOffsetForPageScrollView;
- (struct CGSize)contentSizeForPageScrollView;
- (struct CGRect)frameForPageAtItem:(unsigned long long)arg1;
- (struct CGRect)frameForPageScrollView;
- (void)handleSingleTap;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)viewWillBeInteractivePoped;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)hideVCAnimation;
- (void)hideFullScreen;
- (void)showFullScreen;
- (void)OnMMUIHookViewFrameChanged:(id)arg1;
- (id)alertTitle;
- (void)showAlert:(id)arg1;
- (void)deleteCurrentItem;
- (void)updateTitle;
- (void)initScrollView;
- (void)initNavigationBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

