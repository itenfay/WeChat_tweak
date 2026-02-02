//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCFinderFullScreenEditVideoViewControllerDelegate;

@interface WCFinderFullScreenEditVideoViewController
{
    id <WCFinderFullScreenEditVideoViewControllerDelegate> _finderDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderFullScreenEditVideoViewControllerDelegate> finderDelegate; // @synthesize finderDelegate=_finderDelegate;
- (void)registerYReportSdk;
- (void)finderEditVideoLayoutDrawEnd;
- (void)finderEditVideoLayoutDrawStart;
- (void)finderEditVideoLayoutCropDuration;
- (void)finderEditVideoLayoutEmotionChanged;
- (void)finderEditVideoLayoutViewBGMChanged;
- (double)finderEditVideoLayoutViewGetVideoDurationInSecond;
- (id)originalUrls;
- (struct CGPoint)emotionOffset;
- (id)editResultComposition;
- (void)onEnterForeground:(id)arg1;
- (struct CGSize)getImageRatioSize;
- (void)triggerSuperOnClickEditVideoDoneButtonLogic;
- (void)onClickEditVideoDoneButton;
- (void)onClickEditVideoCancelButton;
- (struct CGRect)calculateVideoCropInfo:(id)arg1 previewMoveDatas:(id)arg2 isSizeCrop:(_Bool)arg3;
- (unsigned long long)indexOfMaxWidthAssets:(id)arg1;
- (void)loopPlay;
- (void)editVideoLayoutViewDidPlayReachEnd:(id)arg1;
- (_Bool)isExceedTimelineTimeLimit;
- (float)getOutputTime;
- (_Bool)hidesStatusBar;
- (double)targetOutputWidth;
- (void)showEditVideoViewOn:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)reTriggerVideoPreComposeAction;
- (void)willDisappear;
- (void)viewDidLoad;
- (id)initWithAssets:(id)arg1;
- (id)initWithVideoPaths:(id)arg1 thumbImages:(id)arg2;
- (id)initWithVideoPath:(id)arg1 thumbImage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

