//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCDBMagicAdPushMsgInfo : NSObject
{
    unsigned char _opcode;
    NSString *_msgId;
    unsigned long long _timestamp;
    unsigned long long _message_aid;
    unsigned long long _message_slotid;
    unsigned long long _message_op_time;
    NSString *_message_traceid;
}

+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (id)swift_message_traceid;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)message_traceid;
+ (id)swift_message_op_time;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)message_op_time;
+ (id)swift_message_slotid;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)message_slotid;
+ (id)swift_message_aid;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)message_aid;
+ (id)swift_opcode;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)opcode;
+ (id)swift_timestamp;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)timestamp;
+ (id)swift_msgId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)msgId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *message_traceid; // @synthesize message_traceid=_message_traceid;
@property(nonatomic) unsigned long long message_op_time; // @synthesize message_op_time=_message_op_time;
@property(nonatomic) unsigned long long message_slotid; // @synthesize message_slotid=_message_slotid;
@property(nonatomic) unsigned long long message_aid; // @synthesize message_aid=_message_aid;
@property(nonatomic) unsigned char opcode; // @synthesize opcode=_opcode;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
- (id)description;

@end

