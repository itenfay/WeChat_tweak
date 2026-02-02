//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CBaseContact, CMessageWrap, NSString, PBCMessageWrap;

@interface MMBaseSessionInfo : NSObject
{
    NSString *sessionId;
    unsigned int unreadCount;
    unsigned int lastMsgUpdateTime;
    NSString *draftMsg;
    unsigned int draftMsgTime;
    unsigned int sessionFlag;
    PBCMessageWrap *pbLastMessage;
    unsigned int outUnreadCount;
    unsigned int outUnreadMsgTime;
    unsigned int jumpMsgLocalId;
    CBaseContact *contact;
    CMessageWrap *lastMessage;
    unsigned int sessionTopTime;
    unsigned int sessionUnTopTime;
    NSString *_atUserList;
    long long _referMsgSvrId;
    unsigned long long _messageCount;
}

+ (id)baseSessionInfoWithUsrName:(id)arg1 contact:(id)arg2 lastMessage:(id)arg3 unreadCount:(unsigned int)arg4;
+ (id)baseSessionInfoWithUsrName:(id)arg1 contact:(id)arg2 lastMessage:(id)arg3;
+ (id)baseSessionInfoWithUsrName:(id)arg1;
+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (id)swift_jumpMsgLocalId;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)jumpMsgLocalId;
+ (id)swift_outUnreadMsgTime;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)outUnreadMsgTime;
+ (id)swift_sessionUnTopTime;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)sessionUnTopTime;
+ (id)swift_pbLastMessage;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)pbLastMessage;
+ (id)swift_sessionTopTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)sessionTopTime;
+ (id)swift_outUnreadCount;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)outUnreadCount;
+ (id)swift_sessionFlag;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)sessionFlag;
+ (id)swift_draftMsgTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)draftMsgTime;
+ (id)swift_draftMsg;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)draftMsg;
+ (id)swift_lastMsgUpdateTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)lastMsgUpdateTime;
+ (id)swift_unreadCount;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)unreadCount;
+ (id)swift_sessionId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)sessionId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long messageCount; // @synthesize messageCount=_messageCount;
@property(nonatomic) long long referMsgSvrId; // @synthesize referMsgSvrId=_referMsgSvrId;
@property(retain, nonatomic) NSString *atUserList; // @synthesize atUserList=_atUserList;
@property(nonatomic) unsigned int jumpMsgLocalId; // @synthesize jumpMsgLocalId;
@property(nonatomic) unsigned int outUnreadMsgTime; // @synthesize outUnreadMsgTime;
@property(nonatomic) unsigned int sessionUnTopTime; // @synthesize sessionUnTopTime;
@property(retain, nonatomic) PBCMessageWrap *pbLastMessage; // @synthesize pbLastMessage;
@property(nonatomic) unsigned int sessionTopTime; // @synthesize sessionTopTime;
@property(nonatomic) unsigned int outUnreadCount; // @synthesize outUnreadCount;
@property(nonatomic) unsigned int sessionFlag; // @synthesize sessionFlag;
@property(nonatomic) unsigned int draftMsgTime; // @synthesize draftMsgTime;
@property(retain, nonatomic) NSString *draftMsg; // @synthesize draftMsg;
@property(nonatomic) unsigned int lastMsgUpdateTime; // @synthesize lastMsgUpdateTime;
@property(nonatomic) unsigned int unreadCount; // @synthesize unreadCount;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId;
- (_Bool)isEqualToSessionInfo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (void)updateContact:(id)arg1;
- (void)updateContact;
- (void)updateLastMessage;
- (void)updateUnreadCount;
- (void)updateDraftAndTime:(id)arg1 Time:(unsigned int)arg2;
- (void)updateSessionInfo;
- (void)copyFieldFromSessionInfo:(id)arg1;
@property(retain, nonatomic) CMessageWrap *lastMessage; // @synthesize lastMessage;
- (id)genLastMessage;
- (void)setContact:(id)arg1;
@property(readonly, nonatomic) CBaseContact *contact; // @synthesize contact;
- (id)genContact;
@property(nonatomic) _Bool showRedDotOuter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

