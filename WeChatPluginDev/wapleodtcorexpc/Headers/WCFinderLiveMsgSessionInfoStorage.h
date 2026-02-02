//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCTableLiveSessionStorage;

@interface WCFinderLiveMsgSessionInfoStorage : NSObject
{
    WCTableLiveSessionStorage *_sessionStorage;
    NSString *_finderUsername;
    NSString *_logName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *logName; // @synthesize logName=_logName;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) WCTableLiveSessionStorage *sessionStorage; // @synthesize sessionStorage=_sessionStorage;
- (void)removeAllSessionInStorage:(id)arg1;
- (_Bool)updateLastMsgWithSessionId:(id)arg1 lastMsg:(id)arg2;
- (id)clearUnreadCountWithSessionId:(id)arg1;
- (id)unreadCountNumber;
- (id)findSessionWithLiveId:(unsigned long long)arg1 liveIdentity:(unsigned int)arg2 selfUserName:(id)arg3;
- (id)sessionInfoWithSessionId:(id)arg1;
- (void)findSessionWithSessionId:(id)arg1 result:(id)arg2;
- (id)findSessionWithSessionId:(id)arg1;
- (_Bool)deleteSessionWithSessionId:(id)arg1;
- (_Bool)addOrUpdateSessionWithSessionId:(id)arg1 sessionInfo:(id)arg2;
- (void)addOrUpdateSessionWithSessionId:(id)arg1 wrapMsg:(id)arg2 result:(id)arg3 updateBlock:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) unsigned long long sessionCount;
- (id)finderDataWithName:(id)arg1;
- (id)finderTableName:(id)arg1;
- (id)initWithSessionType:(id)arg1 finderUsername:(id)arg2 targetDB:(id)arg3 logName:(id)arg4;
- (id)initWithSessionType:(id)arg1 logName:(id)arg2;

@end

