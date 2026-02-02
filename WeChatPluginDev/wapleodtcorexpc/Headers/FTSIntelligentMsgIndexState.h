//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface FTSIntelligentMsgIndexState : NSObject
{
    int _taskId;
    _Bool _hasDeleteTask;
    _Bool _doIngWork;
    NSMutableSet *_nextMsgIndexSessions;
    NSMutableSet *_preMsgIndexSessions;
    NSMutableSet *_missingMsgIndexSessions;
    NSMutableDictionary *_dicSessionMaxId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool doIngWork; // @synthesize doIngWork=_doIngWork;
@property(nonatomic) _Bool hasDeleteTask; // @synthesize hasDeleteTask=_hasDeleteTask;
@property(retain, nonatomic) NSMutableDictionary *dicSessionMaxId; // @synthesize dicSessionMaxId=_dicSessionMaxId;
@property(retain, nonatomic) NSMutableSet *missingMsgIndexSessions; // @synthesize missingMsgIndexSessions=_missingMsgIndexSessions;
@property(retain, nonatomic) NSMutableSet *preMsgIndexSessions; // @synthesize preMsgIndexSessions=_preMsgIndexSessions;
@property(retain, nonatomic) NSMutableSet *nextMsgIndexSessions; // @synthesize nextMsgIndexSessions=_nextMsgIndexSessions;
- (id)description;
- (_Bool)hasFinishAllTask;
- (id)init;

@end

