//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAJSEventHandler_openRedPacketEditPage
{
    NSString *_currentDownloadFeedId;
    long long _minSeconds;
    long long _maxSeconds;
}

- (void).cxx_destruct;
@property(nonatomic) long long maxSeconds; // @synthesize maxSeconds=_maxSeconds;
@property(nonatomic) long long minSeconds; // @synthesize minSeconds=_minSeconds;
@property(copy, nonatomic) NSString *currentDownloadFeedId; // @synthesize currentDownloadFeedId=_currentDownloadFeedId;
- (void)onRedPacketEditCancel;
- (void)onRedPacketEditResponse:(id)arg1;
- (void)backFailAction;
- (void)finderMediaVideoStreamDownloadFailedWithTid:(id)arg1;
- (void)finderMediaVideoDownloadQueueChange;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)arg1;
- (void)presentRedPacketVideoEditViewControllerFromDataItem:(id)arg1;
- (_Bool)targetDataItemHasVideoPath:(id)arg1;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

