//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveContentVM, MMFinderLiveReplayTask, MMFinderLiveReplayViewController;

@interface MMFinderLiveReplayContainItemViewController
{
    _Bool _isPreviewMuted;
    MMFinderLiveReplayViewController *_replayController;
    MMFinderLiveReplayTask *_replayTask;
    MMFinderLiveContentVM *_contentVM;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPreviewMuted; // @synthesize isPreviewMuted=_isPreviewMuted;
@property(retain, nonatomic) MMFinderLiveContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) MMFinderLiveReplayTask *replayTask; // @synthesize replayTask=_replayTask;
@property(retain, nonatomic) MMFinderLiveReplayViewController *replayController; // @synthesize replayController=_replayController;
- (void)registerYReportSdk;
- (struct CGRect)getWindowBounds;
- (void)checkAndResumeLive;
- (void)onLiveComplete;
- (void)endLive;
- (void)startLive:(unsigned long long)arg1;
- (void)stopPreview;
- (void)startPreviewMuted:(_Bool)arg1 isInScroll:(_Bool)arg2;
- (void)startPreview;
- (void)layoutController;
- (void)prepareController;
- (void)prepareLiveTask;
- (id)controller;
- (id)liveTask;
- (void)updateSafeAreaInsets;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContentVM:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool isInPreview;

@end

