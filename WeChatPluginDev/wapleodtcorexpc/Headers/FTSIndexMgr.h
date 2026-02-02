//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FTSDB;
@protocol OS_dispatch_queue;

@interface FTSIndexMgr : NSObject
{
    long long m_preThermalState;
    _Bool _canceled;
    int _currentPriority;
    FTSDB *_ftsDB;
    unsigned long long _iFTSIndexingType;
    NSObject<OS_dispatch_queue> *_taskQueue;
}

- (void).cxx_destruct;
@property(nonatomic) int currentPriority; // @synthesize currentPriority=_currentPriority;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(nonatomic) unsigned long long iFTSIndexingType; // @synthesize iFTSIndexingType=_iFTSIndexingType;
@property(retain, nonatomic) FTSDB *ftsDB; // @synthesize ftsDB=_ftsDB;
- (void)iFTSClearIndex;
- (int)iFTSIndexingCount;
- (double)iFTSIndexingInterval;
- (void)iFTSIndexingResumeBackground;
- (void)iFTSIndexingPauseBackground;
- (void)iFTSIndexingMemoryWarning;
- (void)iFTSIndexingPrepareSearch;
- (_Bool)iFTSIsCancel;
- (void)iFTSIndexingStop;
- (void)iFTSIndexingFinish;
- (void)iFTSIndexingFireTask:(int)arg1;
- (void)iFTSIndexingInit;
- (id)initWithFTSDB:(id)arg1;

@end

