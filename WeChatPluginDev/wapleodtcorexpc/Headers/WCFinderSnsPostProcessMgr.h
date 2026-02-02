//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJPublisher, NSMutableArray, NSString;
@protocol WCFinderSnsPostProcessMgrDelegate;

@interface WCFinderSnsPostProcessMgr : NSObject
{
    id <WCFinderSnsPostProcessMgrDelegate> _delegate;
    NSMutableArray *_assetArray;
    unsigned long long _enterTime;
    MJPublisher *_mjPublisher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJPublisher *mjPublisher; // @synthesize mjPublisher=_mjPublisher;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) NSMutableArray *assetArray; // @synthesize assetArray=_assetArray;
@property(nonatomic) __weak id <WCFinderSnsPostProcessMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)processWithSightDraft:(id)arg1 finderTask:(id)arg2 publisherPostInfo:(id)arg3;
- (void)handleMJAppProducedVideoWithPostSession:(id)arg1 composingVC:(id)arg2;
- (void)handleActionFlow:(id)arg1 composingVC:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFinishWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)handleVideoFileURL:(id)arg1 composingVC:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFinishWithVideoFileURL:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)composingViewControllerDidCancel:(id)arg1;
- (void)presentMJMovieComposingViewControllerWithLocalPathArray:(id)arg1 mediaType:(long long)arg2 fromVC:(id)arg3 enterScene:(unsigned long long)arg4;
- (void)onMJPublisherMovieComposingFinishFailed;
- (void)onMJPublisherMovieComposingStartFailed;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (void)editImageViewController:(id)arg1 didFinishEditingImage:(id)arg2;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2 andForceChangeToScene:(unsigned int)arg3;
- (void)returnToTimelineOrAlbum;
- (void)updateVideoPath:(id)arg1 andThumbnail:(id)arg2;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2 sliderContentOffset:(struct CGPoint)arg3;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2;
- (void)presentEditViewControllerWithLocalPathArray:(id)arg1 mediaType:(long long)arg2 fromVC:(id)arg3 enterScene:(unsigned long long)arg4;
- (void)reportEnterPage:(int)arg1 eventCode:(long long)arg2 dismiss:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

