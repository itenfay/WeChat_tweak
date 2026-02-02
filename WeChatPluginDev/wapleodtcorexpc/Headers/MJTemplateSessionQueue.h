//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJTemplateSession, NSMutableArray;

@interface MJTemplateSessionQueue : NSObject
{
    MJTemplateSession *_workingSession;
    NSMutableArray *_pendingSessions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *pendingSessions; // @synthesize pendingSessions=_pendingSessions;
@property(readonly, nonatomic) MJTemplateSession *workingSession; // @synthesize workingSession=_workingSession;
- (_Bool)releaseWorkingSession:(id)arg1;
- (_Bool)releaseWorkingSession;
- (id)scheduleNextWorkingSession;
- (_Bool)removePendingSession:(id)arg1;
- (_Bool)addPendingSession:(id)arg1;
- (_Bool)isSessionPending:(id)arg1;
- (_Bool)isSessionWorking:(id)arg1;
- (_Bool)containsSession:(id)arg1;
@property(readonly, nonatomic) _Bool isIdle;
- (id)init;

@end

