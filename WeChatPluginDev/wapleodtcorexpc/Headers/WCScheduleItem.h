//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDate, NSString;

@interface WCScheduleItem
{
    unsigned int _messageType;
    unsigned int _messageInnerType;
    unsigned int _favId;
    unsigned int _favLocalId;
    int _opType;
    unsigned int _remindTime;
    NSString *_remindId;
    NSString *_username;
    long long _mesSvrID;
    NSString *_content;
    NSDate *_date;
    unsigned long long _type;
    unsigned long long _createTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_favLocalId;
+ (void)PBArrayAdd_favId;
+ (void)PBArrayAdd_date;
+ (void)PBArrayAdd_mesSvrID;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_username;
+ (void)__wcdb_column_constraint_10:(void *)arg1;
+ (id)swift_remindId;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)remindId;
+ (id)swift_remindTime;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)remindTime;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_type;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)type;
+ (id)swift_favLocalId;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)favLocalId;
+ (id)swift_favId;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)favId;
+ (id)swift_date;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)date;
+ (id)swift_content;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)content;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)username;
+ (id)swift_mesSvrID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)mesSvrID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int remindTime; // @synthesize remindTime=_remindTime;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) int opType; // @synthesize opType=_opType;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned int favLocalId; // @synthesize favLocalId=_favLocalId;
@property(nonatomic) unsigned int favId; // @synthesize favId=_favId;
@property(nonatomic) unsigned int messageInnerType; // @synthesize messageInnerType=_messageInnerType;
@property(nonatomic) unsigned int messageType; // @synthesize messageType=_messageType;
@property(nonatomic) long long mesSvrID; // @synthesize mesSvrID=_mesSvrID;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *remindId; // @synthesize remindId=_remindId;
- (_Bool)isEqualTo:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

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

