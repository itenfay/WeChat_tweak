//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WANewXmlPushLibsMsg : NSObject
{
    unsigned int _createTime;
    unsigned int _expireTime;
    unsigned int _busiType;
    unsigned int _msgType;
    unsigned int _receiveTime;
    NSString *_msgId;
    NSString *_appId;
    NSString *_dataJson;
}

+ (void)__wcdb_table_constraint_9:(void *)arg1;
+ (void)__wcdb_table_constraint_8:(void *)arg1;
+ (id)swift_receiveTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)receiveTime;
+ (id)swift_dataJson;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)dataJson;
+ (id)swift_msgType;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)msgType;
+ (id)swift_busiType;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)busiType;
+ (id)swift_expireTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)expireTime;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_appId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)appId;
+ (id)swift_msgId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)msgId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int receiveTime; // @synthesize receiveTime=_receiveTime;
@property(copy, nonatomic) NSString *dataJson; // @synthesize dataJson=_dataJson;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) unsigned int busiType; // @synthesize busiType=_busiType;
@property(nonatomic) unsigned int expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
- (id)initWithDictionary:(id)arg1;
- (id)toDictionary;
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

