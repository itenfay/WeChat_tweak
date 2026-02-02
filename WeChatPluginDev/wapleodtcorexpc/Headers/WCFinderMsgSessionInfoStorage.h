//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, NSMutableSet, NSString, WCFinderMsgSessionInfo, WCFinderMsgSessionOwnerInfo, WCTableSessionStorage;

@interface WCFinderMsgSessionInfoStorage : NSObject
{
    _Bool _acceptAllMyAccountUsername;
    _Bool _showingGreetMsgSessionList;
    _Bool _needUpdateGreetMsgSession;
    NSMutableOrderedSet *m_newArrivalMsgSessionList;
    WCTableSessionStorage *_sessionStorage;
    WCTableSessionStorage *_greetMsgSessionStorage;
    NSString *_finderUsername;
    NSString *_logName;
    WCFinderMsgSessionInfo *_greetMsgSessionInfo;
    WCFinderMsgSessionOwnerInfo *_ownerInfo;
    NSMutableSet *_validMyAccountUsernames;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *validMyAccountUsernames; // @synthesize validMyAccountUsernames=_validMyAccountUsernames;
@property(retain, nonatomic) WCFinderMsgSessionOwnerInfo *ownerInfo; // @synthesize ownerInfo=_ownerInfo;
@property(nonatomic) _Bool needUpdateGreetMsgSession; // @synthesize needUpdateGreetMsgSession=_needUpdateGreetMsgSession;
@property(retain, nonatomic) WCFinderMsgSessionInfo *greetMsgSessionInfo; // @synthesize greetMsgSessionInfo=_greetMsgSessionInfo;
@property(retain, nonatomic) NSString *logName; // @synthesize logName=_logName;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) _Bool showingGreetMsgSessionList; // @synthesize showingGreetMsgSessionList=_showingGreetMsgSessionList;
@property(retain, nonatomic) WCTableSessionStorage *greetMsgSessionStorage; // @synthesize greetMsgSessionStorage=_greetMsgSessionStorage;
@property(retain, nonatomic) WCTableSessionStorage *sessionStorage; // @synthesize sessionStorage=_sessionStorage;
@property(nonatomic) _Bool acceptAllMyAccountUsername; // @synthesize acceptAllMyAccountUsername=_acceptAllMyAccountUsername;
- (_Bool)renameLocalSessionTableNameForMasterFinder:(id)arg1;
- (void)removeAllSessionInStorage:(id)arg1;
- (void)clearDataForChangeOwner;
- (_Bool)isValidMyAccountUsername:(id)arg1;
- (void)updateOtherValidUsernames:(id)arg1;
- (void)updateOwner:(id)arg1 otherValidUsernames:(id)arg2 defaultOwnerAccessBlock:(CDUnknownBlockType)arg3 hideSessionBlock:(CDUnknownBlockType)arg4 removeSessionBlock:(CDUnknownBlockType)arg5;
- (void)saveOwnerInfo;
@property(readonly, nonatomic) NSString *owner;
- (id)_pathOfOwnerInfoWithDirectoryName:(id)arg1;
- (id)pathOfOwnerInfo;
- (_Bool)removeNewArrivalMsgSessionWithSessionId:(id)arg1;
- (_Bool)updateNewArrivalMsgWithSessionIds:(id)arg1;
- (_Bool)clearAllNewArrivalMsgSessionList;
- (_Bool)hasNewArrivalMsgSessionList;
@property(readonly, nonatomic) NSMutableOrderedSet *newArrivalMsgSessionList; // @synthesize newArrivalMsgSessionList=m_newArrivalMsgSessionList;
- (void)saveNewArrivalMsgSessionList;
- (id)_pathOfNewArrivalMsgSessionListDataWithDirectoryName:(id)arg1;
- (id)pathOfNewArrivalMsgSessionListData;
- (void)updateGreetMsgSessionWithSessionInfo:(id)arg1;
- (void)updateGreetMsgSessionInfo;
- (_Bool)updateGreetMsgSessionUnreadStatusForClearUnread;
- (_Bool)updateGreetMsgSessionUnreadStatus:(_Bool)arg1;
- (void)makeSureLoadGreetMsgSession;
- (_Bool)hasUnreadInGreetSessionList;
- (_Bool)isGreetMsgSessionUnread;
- (_Bool)updateLastMsgWithSessionId:(id)arg1 lastMsg:(id)arg2;
- (id)clearUnreadCountWithSessionId:(id)arg1;
- (_Bool)clearAllTempSessionsInGreetMsgSessionList;
- (id)unreadCountNumber;
- (id)sessionInfoWithSessionId:(id)arg1;
- (void)findSessionWithSessionId:(id)arg1 result:(id)arg2;
- (id)findSessionWithSessionId:(id)arg1;
- (_Bool)deleteSessionWithSessionId:(id)arg1;
- (void)addOrUpdateSessionWithSessionId:(id)arg1 wrapMsg:(id)arg2 result:(id)arg3 updateBlock:(CDUnknownBlockType)arg4;
- (void)addGreetMsgSessionWithSessionType:(id)arg1 greetSessionId:(id)arg2 targetDB:(id)arg3 unreadStatus:(_Bool)arg4 baseStorageDelagate:(id)arg5;
@property(readonly, nonatomic) unsigned long long sessionCount;
- (id)ownerInfoWithName:(id)arg1;
- (id)finderDataWithName:(id)arg1;
- (id)greetTableName:(id)arg1;
- (id)finderTableName:(id)arg1;
- (id)initWithNormalSessionType:(id)arg1 finderUsername:(id)arg2 targetDB:(id)arg3 logName:(id)arg4 baseStorageDelagate:(id)arg5;
- (id)initWithNormalSessionType:(id)arg1 logName:(id)arg2 baseStorageDelagate:(id)arg3;

@end

