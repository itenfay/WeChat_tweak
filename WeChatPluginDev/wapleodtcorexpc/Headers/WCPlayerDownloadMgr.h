//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCPlayerDownloadMgr
{
    NSMutableDictionary *_dicTaskInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicTaskInfo; // @synthesize dicTaskInfo=_dicTaskInfo;
- (void)onDownloadTaskFinish:(id)arg1;
- (void)CleanAllDownloadTaskInfoWithTaskIdentifier:(id)arg1;
- (_Bool)removeDownloadTaskWithTaskIdentifier:(id)arg1 taskId:(unsigned int)arg2;
- (_Bool)IsNeedCreateNewDownloadTaskWithTaskIdentifier:(id)arg1 taskId:(unsigned int)arg2;
- (_Bool)StartDownloadWithTaskIdentifier:(id)arg1 downloadType:(unsigned long long)arg2 downloadMode:(int)arg3 request:(CDUnknownBlockType)arg4;
- (void)registerDownloadEventWithTaskIdentifier:(id)arg1 taskId:(unsigned int)arg2 progress:(CDUnknownBlockType)arg3 m3u8Ready:(CDUnknownBlockType)arg4 moovReady:(CDUnknownBlockType)arg5 complete:(CDUnknownBlockType)arg6 isReuse:(_Bool)arg7;
- (void)registerDownloadEventWithTaskIdentifier:(id)arg1 taskId:(unsigned int)arg2 progress:(CDUnknownBlockType)arg3 m3u8Ready:(CDUnknownBlockType)arg4 moovReady:(CDUnknownBlockType)arg5 complete:(CDUnknownBlockType)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

