//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GameChatRoomAtListUserName : NSObject
{
    NSString *_mainKey;
    NSString *_userName;
    NSString *_nickName;
    NSString *_avatar;
    NSString *_chatRoomName;
}

+ (void)__wcdb_index_10:(void *)arg1;
+ (void)__wcdb_column_constraint_9:(void *)arg1;
+ (id)swift_chatRoomName;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)chatRoomName;
+ (id)swift_avatar;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)avatar;
+ (id)swift_nickName;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)nickName;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)userName;
+ (id)swift_mainKey;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)mainKey;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *chatRoomName; // @synthesize chatRoomName=_chatRoomName;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *mainKey; // @synthesize mainKey=_mainKey;

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

