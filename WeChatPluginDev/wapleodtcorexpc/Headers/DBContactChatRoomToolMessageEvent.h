//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface DBContactChatRoomToolMessageEvent : NSObject
{
    unsigned int _eventTime;
    unsigned int _createTime;
    unsigned int _nReply;
    unsigned int _isDispose;
    NSString *_eventID;
    long long _nRelatedMesSvrID;
    NSString *_userName;
    NSString *_appUserName;
    NSString *_appPath;
    NSString *_title;
    NSString *_desc;
    NSString *_customInfo;
    NSString *_creatorUserName;
    NSMutableDictionary *_extInfo;
    NSString *_manager;
}

+ (void)__wcdb_index_21:(void *)arg1;
+ (void)__wcdb_index_20:(void *)arg1;
+ (void)__wcdb_index_19:(void *)arg1;
+ (void)__wcdb_table_constraint_18:(void *)arg1;
+ (void)__wcdb_table_constraint_17:(void *)arg1;
+ (void)__wcdb_column_constraint_16:(void *)arg1;
+ (void)__wcdb_column_constraint_15:(void *)arg1;
+ (id)swift_isDispose;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)isDispose;
+ (id)swift_nReply;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)nReply;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_manager;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)manager;
+ (id)swift_extInfo;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)extInfo;
+ (id)swift_creatorUserName;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)creatorUserName;
+ (id)swift_customInfo;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)customInfo;
+ (id)swift_desc;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)desc;
+ (id)swift_title;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)title;
+ (id)swift_eventTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)eventTime;
+ (id)swift_appPath;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)appPath;
+ (id)swift_appUserName;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)appUserName;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)userName;
+ (id)swift_nRelatedMesSvrID;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)nRelatedMesSvrID;
+ (id)swift_eventID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)eventID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int isDispose; // @synthesize isDispose=_isDispose;
@property(nonatomic) unsigned int nReply; // @synthesize nReply=_nReply;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NSMutableDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *creatorUserName; // @synthesize creatorUserName=_creatorUserName;
@property(retain, nonatomic) NSString *customInfo; // @synthesize customInfo=_customInfo;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int eventTime; // @synthesize eventTime=_eventTime;
@property(retain, nonatomic) NSString *appPath; // @synthesize appPath=_appPath;
@property(retain, nonatomic) NSString *appUserName; // @synthesize appUserName=_appUserName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) long long nRelatedMesSvrID; // @synthesize nRelatedMesSvrID=_nRelatedMesSvrID;
@property(retain, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;

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

