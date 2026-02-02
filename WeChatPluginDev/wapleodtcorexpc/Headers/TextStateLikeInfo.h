//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, StatusCommentMessageThumb;

@interface TextStateLikeInfo
{
    _Bool _bDeleted;
    _Bool _bNotify;
    _Bool _bHadRead;
    unsigned int _likeType;
    unsigned int _createTime;
    unsigned int _likeCount;
    unsigned int _source;
    unsigned long long _likeId;
    NSString *_statusID;
    NSString *_nikeName;
    NSString *_hashName;
    NSString *_headImageUrl;
    NSString *_extInfo;
    unsigned long long _version;
    unsigned long long _likeCountVersion;
    NSString *_encodeUsername;
    NSString *_affUserName;
    StatusCommentMessageThumb *_messageThumbData;
}

+ (id)GenerateLikeInfoWithStatusLiked:(id)arg1;
+ (id)GenerateLikeInfoWithExtInfo:(id)arg1 dataItem:(id)arg2;
+ (void)__wcdb_index_17:(void *)arg1;
+ (void)__wcdb_table_constraint_16:(void *)arg1;
+ (void)__wcdb_table_constraint_15:(void *)arg1;
+ (void)__wcdb_table_constraint_14:(void *)arg1;
+ (id)swift_source;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)source;
+ (id)swift_encodeUsername;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)encodeUsername;
+ (id)swift_likeCountVersion;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)likeCountVersion;
+ (id)swift_version;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)version;
+ (id)swift_extInfo;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)extInfo;
+ (id)swift_bHadRead;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)bHadRead;
+ (id)swift_bNotify;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)bNotify;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_likeType;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)likeType;
+ (id)swift_headImageUrl;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)headImageUrl;
+ (id)swift_hashName;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)hashName;
+ (id)swift_nikeName;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)nikeName;
+ (id)swift_statusID;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)statusID;
+ (id)swift_likeId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)likeId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) StatusCommentMessageThumb *messageThumbData; // @synthesize messageThumbData=_messageThumbData;
@property(retain, nonatomic) NSString *affUserName; // @synthesize affUserName=_affUserName;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *encodeUsername; // @synthesize encodeUsername=_encodeUsername;
@property(nonatomic) unsigned long long likeCountVersion; // @synthesize likeCountVersion=_likeCountVersion;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) unsigned int likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) _Bool bHadRead; // @synthesize bHadRead=_bHadRead;
@property(nonatomic) _Bool bNotify; // @synthesize bNotify=_bNotify;
@property(nonatomic) _Bool bDeleted; // @synthesize bDeleted=_bDeleted;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int likeType; // @synthesize likeType=_likeType;
@property(retain, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(retain, nonatomic) NSString *hashName; // @synthesize hashName=_hashName;
@property(retain, nonatomic) NSString *nikeName; // @synthesize nikeName=_nikeName;
@property(retain, nonatomic) NSString *statusID; // @synthesize statusID=_statusID;
@property(nonatomic) unsigned long long likeId; // @synthesize likeId=_likeId;
@property(readonly, copy) NSString *description;
- (id)notifyListReportParams;
- (id)username;
- (id)profileContact;

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

