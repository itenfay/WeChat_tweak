//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FTSDB, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface FTSIndexEngine : NSObject
{
    NSMutableArray *_arrIndexingQueue;
    _Bool _canceled;
    _Bool _pause;
    _Bool _isInIndexingLoop;
    int _currentPriority;
    FTSDB *_ftsDB;
    NSMutableArray *_arrTask;
    NSMutableDictionary *_dicTask;
    NSObject<OS_dispatch_queue> *_taskQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(retain, nonatomic) NSMutableDictionary *dicTask; // @synthesize dicTask=_dicTask;
@property(retain, nonatomic) NSMutableArray *arrTask; // @synthesize arrTask=_arrTask;
@property(retain, nonatomic) FTSDB *ftsDB; // @synthesize ftsDB=_ftsDB;
- (void)onReceiveResumeBackgroundTask:(unsigned long long)arg1;
- (void)onReceivePauseBackgroundTask:(unsigned long long)arg1;
- (void)onRecoverIndexOfMgr:(unsigned long long)arg1 withCallBack:(CDUnknownBlockType)arg2;
- (void)onRecoverFTSDB;
- (void)onReceiveMemoryWarning;
- (void)doIndexingInPriority:(int)arg1 forIndexType:(unsigned long long)arg2;
- (void)doIndexingInPriority:(int)arg1;
- (void)stopIndexing;
- (void)doInitIndexing;
- (void)registerIndexingManager:(id)arg1;
- (id)init;

@end

