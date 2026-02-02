//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTaskId, NSMutableArray, NSMutableDictionary;

@interface MMLiveCommentPostTaskQueue : NSObject
{
    unsigned int _boxType;
    MMLiveTaskId *_taskId;
    NSMutableArray *_pendingQueue;
    NSMutableDictionary *_postingDict;
    unsigned long long _currMaxPostTaskID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currMaxPostTaskID; // @synthesize currMaxPostTaskID=_currMaxPostTaskID;
@property(retain, nonatomic) NSMutableDictionary *postingDict; // @synthesize postingDict=_postingDict;
@property(retain, nonatomic) NSMutableArray *pendingQueue; // @synthesize pendingQueue=_pendingQueue;
@property(nonatomic) unsigned int boxType; // @synthesize boxType=_boxType;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)onPostTaskPostEnd:(unsigned long long)arg1;
- (void)onPostTaskPostBegin:(id)arg1;
- (void)autoIncreasePostTaskID;
- (unsigned long long)generatePostTaskID;
- (_Bool)isCurrPostingTaskOverLimit;
- (int)maxPostingCntOnce;
- (id)initWithTaskId:(id)arg1 boxType:(unsigned int)arg2;

@end

