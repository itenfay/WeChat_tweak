//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface MMAppAttachFileMgr
{
    NSMutableDictionary *_msgWrapDict;
    NSMutableDictionary *_msgAttachUrlDict;
}

+ (void)reportSendFileAction:(id)arg1 action:(int)arg2;
+ (void)reportFileMsg:(id)arg1 action:(int)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *msgAttachUrlDict; // @synthesize msgAttachUrlDict=_msgAttachUrlDict;
@property(retain, nonatomic) NSMutableDictionary *msgWrapDict; // @synthesize msgWrapDict=_msgWrapDict;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onBatchCheckBigFileUploadRespnse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetCheckBigFileUploadRespnse:(id)arg1 eventID:(unsigned int)arg2;
- (void)OnCdnUpload:(id)arg1;
- (void)checkUploadInternal:(id)arg1 scene:(unsigned int)arg2;
- (void)calcMessageWrapFileMd5:(id)arg1 scene:(unsigned int)arg2 filePath:(id)arg3;
- (void)batchCheckUploadDataList:(id)arg1 inMsg:(id)arg2;
- (void)checkUpload:(id)arg1 scene:(unsigned int)arg2;
- (void)checkIfFileExistInSvr:(id)arg1;
- (_Bool)isLargeFileMessage:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

