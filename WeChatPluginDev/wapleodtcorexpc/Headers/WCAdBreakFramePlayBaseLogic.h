//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAdAlphaVideoView, WCAdBreakFrameInfo, WCDataItem;

@interface WCAdBreakFramePlayBaseLogic
{
    _Bool _bTimelineScene;
    WCAdBreakFrameInfo *_adBreakFrameInfo;
    WCDataItem *_dataItem;
    WCAdAlphaVideoView *_alphaVideoView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool bTimelineScene; // @synthesize bTimelineScene=_bTimelineScene;
@property(readonly, nonatomic) WCAdAlphaVideoView *alphaVideoView; // @synthesize alphaVideoView=_alphaVideoView;
@property(readonly, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(readonly, nonatomic) WCAdBreakFrameInfo *adBreakFrameInfo; // @synthesize adBreakFrameInfo=_adBreakFrameInfo;
- (id)fetchBreakFrameReportInfo;
- (id)fetchVideoPlayInfo;
- (void)onSelfComment;
- (void)onSelfCancelLike;
- (void)onSelfLike;
- (void)onReferenceVideoPlaybackTimeUpdate:(double)arg1 isPlaying:(_Bool)arg2;
- (void)onReferenceVideoStop;
- (void)onReferenceVideoPlay;
- (void)reset;
- (_Bool)checkPlayMode;
- (id)initWithBreakFrameInfo:(id)arg1 dataItem:(id)arg2 alphaVideoView:(id)arg3 bTimelineScene:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

