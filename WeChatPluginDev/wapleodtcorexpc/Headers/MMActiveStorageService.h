//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMActiveMessageInfoPersist, MMActiveStorageReportStatus, MMTimer, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MMActiveStorageService
{
    _Bool _isScanning;
    NSMutableArray *_arrSessionInfo;
    NSMutableArray *_arrBrandSessionInfo;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    MMActiveMessageInfoPersist *_persistInfo;
    MMActiveStorageReportStatus *_lastReportStatus;
    MMTimer *_reportTimer;
}

+ (_Bool)checkActiveWithLocalID:(unsigned int)arg1 infoType:(unsigned long long)arg2 fileName:(id)arg3 with:(id)arg4;
+ (unsigned int)parseMesLocalIdFromPath:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *reportTimer; // @synthesize reportTimer=_reportTimer;
@property(nonatomic) _Bool isScanning; // @synthesize isScanning=_isScanning;
@property(retain, nonatomic) MMActiveStorageReportStatus *lastReportStatus; // @synthesize lastReportStatus=_lastReportStatus;
@property(retain, nonatomic) MMActiveMessageInfoPersist *persistInfo; // @synthesize persistInfo=_persistInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue; // @synthesize serviceQueue=_serviceQueue;
@property(retain, nonatomic) NSMutableArray *arrBrandSessionInfo; // @synthesize arrBrandSessionInfo=_arrBrandSessionInfo;
@property(retain, nonatomic) NSMutableArray *arrSessionInfo; // @synthesize arrSessionInfo=_arrSessionInfo;
- (void)onUserClickAudio:(id)arg1;
- (void)onUserClickFile:(id)arg1;
- (void)onUserClickVideo:(id)arg1 inFullScreenView:(_Bool)arg2;
- (void)onUserClickImage:(id)arg1 byChangePage:(_Bool)arg2;
- (void)checkSession:(id)arg1 reportStatus:(id)arg2;
- (void)startToReport;
- (_Bool)shouldReportClickTimeGothrough;
- (unsigned int)getActiveMsgInterval;
- (_Bool)getOpenToReport;
- (_Bool)isShouldReport;
- (void)reportPhase;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

