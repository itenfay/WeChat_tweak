//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCFinderUploadDraftTask : NSObject
{
    _Bool _running;
    _Bool _finished;
    NSString *_taskId;
    SEL _action;
    SEL _resultHandler;
    SEL _failedHandler;
    id _obj;
    NSMutableArray *_subTasks;
    NSMutableArray *_doneSubTasks;
}

+ (id)taskWithTaskId:(id)arg1 action:(SEL)arg2 obj:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *doneSubTasks; // @synthesize doneSubTasks=_doneSubTasks;
@property(retain, nonatomic) NSMutableArray *subTasks; // @synthesize subTasks=_subTasks;
@property(retain, nonatomic) id obj; // @synthesize obj=_obj;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(nonatomic) SEL failedHandler; // @synthesize failedHandler=_failedHandler;
@property(nonatomic) SEL resultHandler; // @synthesize resultHandler=_resultHandler;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (_Bool)turnNextSubTask;
@property(readonly, nonatomic) WCFinderUploadDraftTask *currentTask;
- (void)addSubTask:(id)arg1;

@end

