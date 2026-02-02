//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WXGBackupIndexDB, WXGBackupRecoverAnalyseInfo, WXGChatLogRecoverFilter;
@protocol OS_dispatch_queue, WXGBackupRecoverHelperDelegate;

@interface WXGBackupRecoverHelper : NSObject
{
    _Bool _isRecover;
    id <WXGBackupRecoverHelperDelegate> _delegate;
    WXGBackupRecoverAnalyseInfo *_analyseInfo;
    NSObject<OS_dispatch_queue> *_fileSerialQueue;
    WXGBackupIndexDB *_indexDB;
    WXGChatLogRecoverFilter *_recoverFilter;
    unsigned long long _leftSpace;
}

+ (_Bool)checkBackupRecoverOnlyText;
+ (void)setBackupRecoverOnlyText:(_Bool)arg1;
+ (void)deleteAllMediaData;
+ (void)deleteBufferMsgListArray:(id)arg1;
+ (void)deleteMsgListArray:(id)arg1;
+ (id)p_bufferPathForDataId:(id)arg1;
+ (id)p_pathForDataId:(id)arg1;
+ (unsigned long long)reservedBackupMediaSize;
+ (id)indexDBPath;
+ (id)backupMediaBufferPath;
+ (id)backupMediaPath;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long leftSpace; // @synthesize leftSpace=_leftSpace;
@property(retain, nonatomic) WXGChatLogRecoverFilter *recoverFilter; // @synthesize recoverFilter=_recoverFilter;
@property(retain, nonatomic) WXGBackupIndexDB *indexDB; // @synthesize indexDB=_indexDB;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fileSerialQueue; // @synthesize fileSerialQueue=_fileSerialQueue;
@property(nonatomic) _Bool isRecover; // @synthesize isRecover=_isRecover;
@property(retain, nonatomic) WXGBackupRecoverAnalyseInfo *analyseInfo; // @synthesize analyseInfo=_analyseInfo;
@property(nonatomic) __weak id <WXGBackupRecoverHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)p_writeBufferFileToPersistentPath;
- (_Bool)p_writeMediaDataPush:(id)arg1 toPath:(id)arg2;
- (_Bool)p_writeMsgListDataPush:(id)arg1 toPath:(id)arg2;
- (void)asynProcessRequestSessionDataInfoArray:(id)arg1;
- (void)asynProcessPieceOfData:(id)arg1;
- (void)asynProcessFilterRequest:(id)arg1;
- (void)asynProcessDataTag:(id)arg1;
- (void)checkDataIntegrity;
- (id)initWithEncryptKey:(id)arg1;
- (id)init;

@end

