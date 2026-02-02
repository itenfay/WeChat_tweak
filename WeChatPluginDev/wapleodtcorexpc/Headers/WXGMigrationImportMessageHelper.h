//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WXGImportMessageHelper, WXGMigrationMsgItemDB;
@protocol OS_dispatch_queue, WXGMigrationImportMessageHelperDelegate;

@interface WXGMigrationImportMessageHelper : NSObject
{
    _Bool m_bImporting;
    unsigned long long m_currentProcessCount;
    unsigned long long m_totalProcesCount;
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    id <WXGMigrationImportMessageHelperDelegate> _delegate;
    WXGImportMessageHelper *_importMessageHelper;
    WXGMigrationMsgItemDB *_msgItemDB;
    NSObject<OS_dispatch_queue> *_importQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *importQueue; // @synthesize importQueue=_importQueue;
@property(retain, nonatomic) WXGMigrationMsgItemDB *msgItemDB; // @synthesize msgItemDB=_msgItemDB;
@property(retain, nonatomic) WXGImportMessageHelper *importMessageHelper; // @synthesize importMessageHelper=_importMessageHelper;
@property(nonatomic) __weak id <WXGMigrationImportMessageHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onImportOneMsgItem:(id)arg1;
- (void)p_oldImportThread;
- (void)p_importThread;
- (void)finishAndRemoveDBFiles;
- (void)cancelImport;
- (void)finishAndUpdateSession;
- (void)stopImport;
- (void)startImport;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

