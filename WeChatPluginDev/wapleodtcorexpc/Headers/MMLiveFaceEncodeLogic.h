//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveFaceEncodeTask, MMLiveTask, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MMLiveFaceEncodeLogic : NSObject
{
    int _sendFPS;
    MMLiveTask *_liveTask;
    MMLiveFaceEncodeTask *_currEncodeTask;
    NSMutableArray *_encodeTaskList;
    NSObject<OS_dispatch_queue> *_encodingQueue;
    double _lastSEISendTime;
}

- (void).cxx_destruct;
@property double lastSEISendTime; // @synthesize lastSEISendTime=_lastSEISendTime;
@property(nonatomic) int sendFPS; // @synthesize sendFPS=_sendFPS;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *encodingQueue; // @synthesize encodingQueue=_encodingQueue;
@property(retain, nonatomic) NSMutableArray *encodeTaskList; // @synthesize encodeTaskList=_encodeTaskList;
@property(retain) MMLiveFaceEncodeTask *currEncodeTask; // @synthesize currEncodeTask=_currEncodeTask;
@property(nonatomic) __weak MMLiveTask *liveTask; // @synthesize liveTask=_liveTask;
- (void)runSyncOnEncodeQueue:(CDUnknownBlockType)arg1;
- (void)runAsyncOnEncodeQueue:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isOverFreqLimit;
@property(readonly, nonatomic) double seiFreqLimitTime;
@property(readonly, nonatomic) unsigned long long maxEncodeTaskCnt;
- (void)sendSeiWithContentData:(id)arg1;
- (void)sendSeiWithContentStr:(id)arg1;
- (_Bool)checkEnableEncodeNext;
- (void)tryEncodeNextTask;
- (void)clearEncodeTaskList;
- (void)checkEncodeTasksOverMaxLimit;
- (id)getNextEncodeTask;
- (void)addEncodeTask:(id)arg1;
- (void)stopEncode;
- (void)encodeAlphaBuffer:(char *)arg1 width:(int)arg2 height:(int)arg3;
- (void)dealloc;
- (void)initDefaultData;
- (id)initWithLiveTask:(id)arg1;

@end

