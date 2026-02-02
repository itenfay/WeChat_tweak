//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DBContactChatRoomTopMsg : NSObject
{
    unsigned int _topId;
    unsigned int _msgType;
    unsigned int _status;
    unsigned int _isRevoke;
    unsigned int _exposureTime;
    NSString *_userName;
    NSString *_opUserName;
    unsigned long long _msgSvrID;
    NSString *_msgSummary;
    NSString *_msgUserName;
}

+ (void)__wcdb_table_constraint_53:(void *)arg1;
+ (void)__wcdb_table_constraint_52:(void *)arg1;
+ (void)__wcdb_index_51:(void *)arg1;
+ (void)__wcdb_index_50:(void *)arg1;
+ (void)__wcdb_column_constraint_49:(void *)arg1;
+ (void)__wcdb_column_constraint_48:(void *)arg1;
+ (void)__wcdb_column_constraint_47:(void *)arg1;
+ (id)swift_exposureTime;
+ (const void *)__wcdb_synthesize_46:(void *)arg1;
+ (const void *)exposureTime;
+ (id)swift_isRevoke;
+ (const void *)__wcdb_synthesize_45:(void *)arg1;
+ (const void *)isRevoke;
+ (id)swift_msgUserName;
+ (const void *)__wcdb_synthesize_44:(void *)arg1;
+ (const void *)msgUserName;
+ (id)swift_status;
+ (const void *)__wcdb_synthesize_43:(void *)arg1;
+ (const void *)status;
+ (id)swift_msgSummary;
+ (const void *)__wcdb_synthesize_42:(void *)arg1;
+ (const void *)msgSummary;
+ (id)swift_msgType;
+ (const void *)__wcdb_synthesize_41:(void *)arg1;
+ (const void *)msgType;
+ (id)swift_msgSvrID;
+ (const void *)__wcdb_synthesize_40:(void *)arg1;
+ (const void *)msgSvrID;
+ (id)swift_opUserName;
+ (const void *)__wcdb_synthesize_39:(void *)arg1;
+ (const void *)opUserName;
+ (id)swift_topId;
+ (const void *)__wcdb_synthesize_38:(void *)arg1;
+ (const void *)topId;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_37:(void *)arg1;
+ (const void *)userName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int exposureTime; // @synthesize exposureTime=_exposureTime;
@property(nonatomic) unsigned int isRevoke; // @synthesize isRevoke=_isRevoke;
@property(retain, nonatomic) NSString *msgUserName; // @synthesize msgUserName=_msgUserName;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *msgSummary; // @synthesize msgSummary=_msgSummary;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) unsigned long long msgSvrID; // @synthesize msgSvrID=_msgSvrID;
@property(retain, nonatomic) NSString *opUserName; // @synthesize opUserName=_opUserName;
@property(nonatomic) unsigned int topId; // @synthesize topId=_topId;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;

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

