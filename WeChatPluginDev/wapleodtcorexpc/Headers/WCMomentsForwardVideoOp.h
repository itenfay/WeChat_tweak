//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCMomentsForwardVideoOpDelegate;

@interface WCMomentsForwardVideoOp
{
    _Bool _isCompositeVideo;
    id <WCMomentsForwardVideoOpDelegate> _videoOpDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCompositeVideo; // @synthesize isCompositeVideo=_isCompositeVideo;
@property(nonatomic) __weak id <WCMomentsForwardVideoOpDelegate> videoOpDelegate; // @synthesize videoOpDelegate=_videoOpDelegate;
- (void)OnForwardMessageFailUpdate:(id)arg1;
- (void)compositeTaskDidBeCancelled:(id)arg1;
- (void)compositeTaskDidStop:(id)arg1 withResult:(id)arg2 compositeSession:(id)arg3;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnCdnDownloadError:(id)arg1;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (unsigned long long)sightLegalityType;
- (_Bool)isLegalSight;
- (void)subscribeVideoCompositeTask;
- (void)subscribeVideoDownload;
- (_Bool)startDownloadVideo;
- (_Bool)handleForwardWithCompositeTask:(id)arg1;
- (void)updateMessageWrap;
- (_Bool)restartForward;
- (_Bool)startForwardToCustomContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

