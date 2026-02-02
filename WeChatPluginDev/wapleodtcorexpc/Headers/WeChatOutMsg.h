//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WeChatOutMsg
{
    _Bool isAutoIncrement;
    unsigned int localID;
    unsigned int createTime;
    unsigned int readStatus;
    unsigned int wcoMsgType;
    unsigned int pushTime;
    int reserve1;
    unsigned int reserve2;
    unsigned long long svrID;
    NSString *title;
    NSString *content;
    NSString *reserve3;
    NSString *reserve4;
    long long lastInsertedRowID;
}

+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (id)swift_reserve4;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)reserve4;
+ (id)swift_reserve3;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)reserve3;
+ (id)swift_reserve2;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)reserve2;
+ (id)swift_reserve1;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)reserve1;
+ (id)swift_pushTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)pushTime;
+ (id)swift_content;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)content;
+ (id)swift_title;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)title;
+ (id)swift_wcoMsgType;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)wcoMsgType;
+ (id)swift_readStatus;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)readStatus;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_svrID;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)svrID;
+ (id)swift_localID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)localID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N,VlastInsertedRowID

@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,VisAutoIncrement

@property(retain, nonatomic) NSString *reserve4; // @synthesize reserve4;
@property(retain, nonatomic) NSString *reserve3; // @synthesize reserve3;
@property(nonatomic) unsigned int reserve2; // @synthesize reserve2;
@property(nonatomic) int reserve1; // @synthesize reserve1;
@property(nonatomic) unsigned int pushTime; // @synthesize pushTime;
@property(retain, nonatomic) NSString *content; // @synthesize content;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) unsigned int wcoMsgType; // @synthesize wcoMsgType;
@property(nonatomic) unsigned int readStatus; // @synthesize readStatus;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(nonatomic) unsigned long long svrID; // @synthesize svrID;
@property(nonatomic) unsigned int localID; // @synthesize localID;
- (void)CopyValueToCopy:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

