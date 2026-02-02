//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WXGBackupIndexDB, WXGImportAnalyseInfo, WXGImportMessageHelper;
@protocol OS_dispatch_queue, WXGBackupImportMessageHelperDelegate;

@interface WXGBackupImportMessageHelper : NSObject
{
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    _Bool _bImportingData;
    unsigned long long _importType;
    id <WXGBackupImportMessageHelperDelegate> _delegate;
    WXGImportAnalyseInfo *_importInfo;
    WXGImportMessageHelper *_importMessageHelper;
    WXGBackupIndexDB *_indexDB;
    NSObject<OS_dispatch_queue> *_importQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *importQueue; // @synthesize importQueue=_importQueue;
@property(retain, nonatomic) WXGBackupIndexDB *indexDB; // @synthesize indexDB=_indexDB;
@property(retain, nonatomic) WXGImportMessageHelper *importMessageHelper; // @synthesize importMessageHelper=_importMessageHelper;
@property(retain, nonatomic) WXGImportAnalyseInfo *importInfo; // @synthesize importInfo=_importInfo;
@property(nonatomic) __weak id <WXGBackupImportMessageHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool bImportingData; // @synthesize bImportingData=_bImportingData;
@property(nonatomic) unsigned long long importType; // @synthesize importType=_importType;
- (void)p_recoverThread;
- (void)p_importWhenDestinationThread;
- (void)finishAndRemoveDBFiles;
- (void)cancelImport;
- (void)finishAndUpdateSession;
- (void)stopImport;
- (void)importWhenDestination:(_Bool)arg1;
- (void)startImport:(_Bool)arg1;
- (void)dealloc;
- (id)init;

@end

