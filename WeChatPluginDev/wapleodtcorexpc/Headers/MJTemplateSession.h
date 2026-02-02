//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJTemplateSessionExportOperation, MJTemplateSessionOperation, MMContext, NSMutableArray, NSString, OMJMaasCore;

@interface MJTemplateSession : NSObject
{
    long long _status;
    NSString *_sessionKey;
    OMJMaasCore *_maasCore;
    unsigned long long _scene;
    NSString *_currentTemplateId;
    MJTemplateSessionExportOperation *_exportOperation;
    CDUnknownBlockType _prepareCompletionHandler;
    CDUnknownBlockType _destroyCompletionHandler;
    MMContext *_mmContext;
    MJTemplateSessionOperation *_currentOperation;
    NSMutableArray *_pendingOperationQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pendingOperationQueue; // @synthesize pendingOperationQueue=_pendingOperationQueue;
@property(retain, nonatomic) MJTemplateSessionOperation *currentOperation; // @synthesize currentOperation=_currentOperation;
@property(readonly, nonatomic) MMContext *mmContext; // @synthesize mmContext=_mmContext;
@property(copy, nonatomic) CDUnknownBlockType destroyCompletionHandler; // @synthesize destroyCompletionHandler=_destroyCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType prepareCompletionHandler; // @synthesize prepareCompletionHandler=_prepareCompletionHandler;
@property(retain, nonatomic) MJTemplateSessionExportOperation *exportOperation; // @synthesize exportOperation=_exportOperation;
@property(copy, nonatomic) NSString *currentTemplateId; // @synthesize currentTemplateId=_currentTemplateId;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) OMJMaasCore *maasCore; // @synthesize maasCore=_maasCore;
@property(copy, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
@property(nonatomic) long long status; // @synthesize status=_status;
- (id)description;
- (unsigned long long)reportScene;
- (void)checkCameraTemplateId:(id)arg1 templateVersion:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_checkIntegralTemplateInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)filterIntegralTemplateList:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)canCheckTemplateInfo;
- (id)_fetchPreloaderWithError:(id *)arg1;
- (id)stopPreloading;
- (id)preloadMusicsByIds:(id)arg1;
- (id)preloadTemplatesByIds:(id)arg1;
- (id)updatePreloadResourceSizeLimit:(unsigned long long)arg1;
- (id)updatePreloadConcurrencyLimit:(unsigned long long)arg1;
- (void)_startExportOperationIfReady;
- (void)_currentExportOperationDidChangeStatus:(id)arg1;
- (void)_setExportOperation:(id)arg1;
- (_Bool)_canStartExportingCreationInStatus:(long long)arg1;
- (_Bool)canStartExportingCreation;
- (void)_startPendingPreviewOperationIfReady;
- (_Bool)_canStartPendingPreviewOperation;
- (void)_currentOperationDidChangeStatus:(id)arg1;
- (void)_addPendingPreviewOperation:(id)arg1;
- (_Bool)_validateStatusForStartingPendingPreviewOperation;
- (_Bool)canStartPreviewOperation;
- (_Bool)canPrepareCreation;
- (void)_finishCleaningUp;
- (void)_tearDownMaasCoreWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_didCompleteCleaningUpWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cleanUpMaasSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cleanUpWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)canCleanUp;
- (_Bool)isCleaningUp;
- (_Bool)createMaasSession;
- (_Bool)startUp:(id *)arg1;
- (_Bool)canStartUp;
- (_Bool)bindMaasCore:(id)arg1;
- (void)dealloc;
- (id)init;

@end

