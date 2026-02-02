//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ChatRoomInvitationDetail, NSString;

@interface ChatRoomInvitationWrap : NSObject
{
    _Bool _hasApproved;
    unsigned int _createTime;
    long long _svrId;
    NSString *_inviterUsrName;
    NSString *_memberList;
    NSString *_allMsgIdList;
    ChatRoomInvitationDetail *_invitationDetail;
}

+ (void)__wcdb_index_9:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (id)swift_invitationDetail;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)invitationDetail;
+ (id)swift_allMsgIdList;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)allMsgIdList;
+ (id)swift_memberList;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)memberList;
+ (id)swift_inviterUsrName;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)inviterUsrName;
+ (id)swift_hasApproved;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)hasApproved;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_svrId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)svrId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) ChatRoomInvitationDetail *invitationDetail; // @synthesize invitationDetail=_invitationDetail;
@property(retain, nonatomic) NSString *allMsgIdList; // @synthesize allMsgIdList=_allMsgIdList;
@property(retain, nonatomic) NSString *memberList; // @synthesize memberList=_memberList;
@property(retain, nonatomic) NSString *inviterUsrName; // @synthesize inviterUsrName=_inviterUsrName;
@property(nonatomic) _Bool hasApproved; // @synthesize hasApproved=_hasApproved;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) long long svrId; // @synthesize svrId=_svrId;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

