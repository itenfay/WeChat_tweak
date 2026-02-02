//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WXGChatLogRecoverFilter, WXGMigrationMsgItemDB;
@protocol OS_dispatch_queue, WXGMigrationRecoverHelperDelegate;

@interface WXGMigrationRecoverHelper : NSObject
{
    id <WXGMigrationRecoverHelperDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_fileSerialQueue;
    WXGChatLogRecoverFilter *_recoverFilter;
    WXGMigrationMsgItemDB *_msgItemDB;
    unsigned long long _totalBackupTextSize;
    unsigned long long _totalBackupMediaSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long totalBackupMediaSize; // @synthesize totalBackupMediaSize=_totalBackupMediaSize;
@property(nonatomic) unsigned long long totalBackupTextSize; // @synthesize totalBackupTextSize=_totalBackupTextSize;
@property(retain, nonatomic) WXGMigrationMsgItemDB *msgItemDB; // @synthesize msgItemDB=_msgItemDB;
@property(retain, nonatomic) WXGChatLogRecoverFilter *recoverFilter; // @synthesize recoverFilter=_recoverFilter;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fileSerialQueue; // @synthesize fileSerialQueue=_fileSerialQueue;
@property(nonatomic) __weak id <WXGMigrationRecoverHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)p_writeBufferFileToPersistentPath;
- (_Bool)p_writeMediaDataPush:(id)arg1 toPath:(id)arg2;
- (_Bool)p_writeMsgListDataPush:(id)arg1 toPath:(id)arg2;
- (void)asynProcessMigrationRequestSessionDataInfoArray:(id)arg1 shouldCheckPersisten:(_Bool)arg2;
- (void)asynProcessMigrationDataTag:(id)arg1;
- (void)oldAsyncProcessPieceOfData:(id)arg1;
- (void)asynProcessPieceOfData:(id)arg1;
- (unsigned long long)getTotalRecoverMediaSize;
- (unsigned long long)getTotalRecoverTextSize;
- (void)checkDataIntegrity;
- (void)dealloc;
- (id)initWithEncryptKey:(id)arg1;

@end

