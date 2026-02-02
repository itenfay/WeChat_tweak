//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface HistoryAddMsgWrap
{
    int _msgType;
    unsigned int _status;
    unsigned int _imgStatus;
    unsigned int _createTime;
    unsigned int _msgSeq;
    NSString *_fromUserName;
    NSString *_toUserName;
    NSString *_content;
    NSString *_msgSource;
    NSString *_pushContent;
    long long _newMsgId;
    NSString *_chatName;
}

+ (id)generateWithMsgWrap:(id)arg1;
+ (void)__wcdb_index_14:(void *)arg1;
+ (void)__wcdb_table_constraint_13:(void *)arg1;
+ (void)__wcdb_table_constraint_12:(void *)arg1;
+ (id)swift_chatName;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)chatName;
+ (id)swift_msgSeq;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)msgSeq;
+ (id)swift_newMsgId;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)newMsgId;
+ (id)swift_pushContent;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)pushContent;
+ (id)swift_msgSource;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)msgSource;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_imgStatus;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)imgStatus;
+ (id)swift_status;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)status;
+ (id)swift_content;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)content;
+ (id)swift_msgType;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)msgType;
+ (id)swift_toUserName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)toUserName;
+ (id)swift_fromUserName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)fromUserName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(nonatomic) unsigned int msgSeq; // @synthesize msgSeq=_msgSeq;
@property(nonatomic) long long newMsgId; // @synthesize newMsgId=_newMsgId;
@property(retain, nonatomic) NSString *pushContent; // @synthesize pushContent=_pushContent;
@property(retain, nonatomic) NSString *msgSource; // @synthesize msgSource=_msgSource;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int imgStatus; // @synthesize imgStatus=_imgStatus;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) int msgType; // @synthesize msgType=_msgType;
@property(retain, nonatomic) NSString *toUserName; // @synthesize toUserName=_toUserName;
@property(retain, nonatomic) NSString *fromUserName; // @synthesize fromUserName=_fromUserName;
- (id)generateMsgWrap;

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

