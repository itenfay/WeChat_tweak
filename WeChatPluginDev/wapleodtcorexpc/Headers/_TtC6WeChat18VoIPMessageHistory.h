//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC6WeChat18VoIPMessageHistory : NSObject
{
    MISSING_TYPE *svrid;
    MISSING_TYPE *localid;
    MISSING_TYPE *roomid;
    MISSING_TYPE *roomkey;
    MISSING_TYPE *inviteid;
    MISSING_TYPE *inviteid64;
    MISSING_TYPE *callerMemberid;
    MISSING_TYPE *calleeMemberid;
    MISSING_TYPE *chatName;
    MISSING_TYPE *timestamp;
    MISSING_TYPE *msg;
    MISSING_TYPE *duration;
}

+ (void)__wcdb_index_23:(void *)arg1;
+ (void)__wcdb_index_22:(void *)arg1;
+ (void)__wcdb_index_21:(void *)arg1;
+ (void)__wcdb_index_20:(void *)arg1;
+ (void)__wcdb_index_19:(void *)arg1;
+ (void)__wcdb_index_18:(void *)arg1;
+ (void)__wcdb_table_constraint_17:(void *)arg1;
+ (void)__wcdb_table_constraint_16:(void *)arg1;
+ (void)__wcdb_table_constraint_15:(void *)arg1;
+ (void)__wcdb_table_constraint_14:(void *)arg1;
+ (void)__wcdb_table_constraint_13:(void *)arg1;
+ (void)__wcdb_table_constraint_12:(void *)arg1;
+ (id)swift_duration;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)duration;
+ (id)swift_msg;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)msg;
+ (id)swift_timestamp;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)timestamp;
+ (id)swift_chatName;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)chatName;
+ (id)swift_calleeMemberid;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)calleeMemberid;
+ (id)swift_callerMemberid;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)callerMemberid;
+ (id)swift_inviteid64;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)inviteid64;
+ (id)swift_inviteid;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)inviteid;
+ (id)swift_roomkey;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)roomkey;
+ (id)swift_roomid;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)roomid;
+ (id)swift_localid;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)localid;
+ (id)swift_svrid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)svrid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic) unsigned int duration; // @synthesize duration;
@property(nonatomic, copy) NSString *msg;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp;
@property(nonatomic, copy) NSString *chatName;
@property(nonatomic) unsigned int calleeMemberid; // @synthesize calleeMemberid;
@property(nonatomic) unsigned int callerMemberid; // @synthesize callerMemberid;
@property(nonatomic) unsigned long long inviteid64; // @synthesize inviteid64;
@property(nonatomic) unsigned int inviteid; // @synthesize inviteid;
@property(nonatomic) unsigned long long roomkey; // @synthesize roomkey;
@property(nonatomic) unsigned long long roomid; // @synthesize roomid;
@property(nonatomic) unsigned int localid; // @synthesize localid;
@property(nonatomic) long long svrid; // @synthesize svrid;
- (struct Expression)identical;

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

