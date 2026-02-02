//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WCBackgroundQueueMgr
{
    _Bool _memoryExceeded;
    _Bool _isEnabled;
    _Bool _suspendByUserScene;
    _Bool _suspendByPerfWarning;
    _Bool _diskScanEnabled;
    _Bool _ftsIndexEnabled;
    _Bool _karaEnabled;
    NSMutableSet *_backgroundDispatchQueues;
    NSMutableSet *_suspendedDispatchQueues;
    NSMutableSet *_backgroundOperationQueue;
    NSObject<OS_dispatch_queue> *_mgrQueue;
    unsigned long long _userType;
    long long _thermalState;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool karaEnabled; // @synthesize karaEnabled=_karaEnabled;
@property(nonatomic) _Bool ftsIndexEnabled; // @synthesize ftsIndexEnabled=_ftsIndexEnabled;
@property(nonatomic) _Bool diskScanEnabled; // @synthesize diskScanEnabled=_diskScanEnabled;
@property(nonatomic) _Bool suspendByPerfWarning; // @synthesize suspendByPerfWarning=_suspendByPerfWarning;
@property(nonatomic) _Bool suspendByUserScene; // @synthesize suspendByUserScene=_suspendByUserScene;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) _Bool memoryExceeded; // @synthesize memoryExceeded=_memoryExceeded;
@property(nonatomic) long long thermalState; // @synthesize thermalState=_thermalState;
@property(nonatomic) unsigned long long userType; // @synthesize userType=_userType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mgrQueue; // @synthesize mgrQueue=_mgrQueue;
@property(retain, nonatomic) NSMutableSet *backgroundOperationQueue; // @synthesize backgroundOperationQueue=_backgroundOperationQueue;
@property(retain, nonatomic) NSMutableSet *suspendedDispatchQueues; // @synthesize suspendedDispatchQueues=_suspendedDispatchQueues;
@property(retain, nonatomic) NSMutableSet *backgroundDispatchQueues; // @synthesize backgroundDispatchQueues=_backgroundDispatchQueues;
- (void)onMatrixPerfWarning:(id)arg1;
- (void)removeUserType:(unsigned long long)arg1;
- (void)addUserType:(unsigned long long)arg1;
- (void)recoverBackgroundWork;
- (void)pauseBackgroundWork;
- (void)reevaluate;
- (_Bool)isAllowedLabel:(const char *)arg1;
- (void)unregisterOperationQueue:(id)arg1;
- (void)registerOperationQueue:(id)arg1;
- (void)unregisterDispatchQueue:(id)arg1;
- (void)registerDispatchQueue:(id)arg1;
- (void)onServiceTerminate;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

