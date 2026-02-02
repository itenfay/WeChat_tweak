//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WCFinderVideoUploadMgr
{
    NSMutableDictionary *_uploadDict;
    NSMutableArray *_uploadWaitingArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *uploadWaitingArray; // @synthesize uploadWaitingArray=_uploadWaitingArray;
@property(retain, nonatomic) NSMutableDictionary *uploadDict; // @synthesize uploadDict=_uploadDict;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)realUploadVideoWithMeta:(id)arg1;
- (void)checkQueue;
- (void)cancelUploadvideoPath:(id)arg1;
- (_Bool)startUploadTingAudioRecordPath:(id)arg1 requestHeader:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 complecteBlock:(CDUnknownBlockType)arg4;
- (void)startUploadAudioPath:(id)arg1 requestHeader:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 complecteBlock:(CDUnknownBlockType)arg4;
- (void)startUploadvideoPath:(id)arg1 thumbPath:(id)arg2 requestHeader:(id)arg3 progressBlock:(CDUnknownBlockType)arg4 complecteBlock:(CDUnknownBlockType)arg5;
- (void)onServiceInit;
- (void)onServiceClearData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

