//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DBContactCacheAccessUserFeatureRecrod : NSObject
{
    unsigned int _operateTime;
    unsigned int _groupLastActiveTimeCount;
    unsigned int _groupMySelfLastActiveTimeCount;
    unsigned int _groupMemberCount;
    unsigned int _groupUnReadMsgCount;
    unsigned int _groupFriendsCount;
    unsigned int _myRecentMsgCount;
    unsigned int _isMute;
    NSString *_userName;
}

+ (void)__wcdb_table_constraint_10:(void *)arg1;
+ (void)__wcdb_table_constraint_9:(void *)arg1;
+ (id)swift_isMute;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)isMute;
+ (id)swift_myRecentMsgCount;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)myRecentMsgCount;
+ (id)swift_groupFriendsCount;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)groupFriendsCount;
+ (id)swift_groupUnReadMsgCount;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)groupUnReadMsgCount;
+ (id)swift_groupMemberCount;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)groupMemberCount;
+ (id)swift_groupMySelfLastActiveTimeCount;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)groupMySelfLastActiveTimeCount;
+ (id)swift_groupLastActiveTimeCount;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)groupLastActiveTimeCount;
+ (id)swift_operateTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)operateTime;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)userName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int isMute; // @synthesize isMute=_isMute;
@property(nonatomic) unsigned int myRecentMsgCount; // @synthesize myRecentMsgCount=_myRecentMsgCount;
@property(nonatomic) unsigned int groupFriendsCount; // @synthesize groupFriendsCount=_groupFriendsCount;
@property(nonatomic) unsigned int groupUnReadMsgCount; // @synthesize groupUnReadMsgCount=_groupUnReadMsgCount;
@property(nonatomic) unsigned int groupMemberCount; // @synthesize groupMemberCount=_groupMemberCount;
@property(nonatomic) unsigned int groupMySelfLastActiveTimeCount; // @synthesize groupMySelfLastActiveTimeCount=_groupMySelfLastActiveTimeCount;
@property(nonatomic) unsigned int groupLastActiveTimeCount; // @synthesize groupLastActiveTimeCount=_groupLastActiveTimeCount;
@property(nonatomic) unsigned int operateTime; // @synthesize operateTime=_operateTime;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(readonly, copy) NSString *description;

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

