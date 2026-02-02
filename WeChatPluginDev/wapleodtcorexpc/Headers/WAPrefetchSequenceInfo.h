//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAPrefetchSequenceInfo
{
    unsigned int _cmdType;
    unsigned int _sequence;
    NSString *_cmdId;
    NSString *_appId;
    NSString *_cmdKey;
}

+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (id)swift_cmdKey;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)cmdKey;
+ (id)swift_sequence;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)sequence;
+ (id)swift_cmdType;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)cmdType;
+ (id)swift_appId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)appId;
+ (id)swift_cmdId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)cmdId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cmdKey; // @synthesize cmdKey=_cmdKey;
@property(nonatomic) unsigned int sequence; // @synthesize sequence=_sequence;
@property(nonatomic) unsigned int cmdType; // @synthesize cmdType=_cmdType;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *cmdId; // @synthesize cmdId=_cmdId;

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

