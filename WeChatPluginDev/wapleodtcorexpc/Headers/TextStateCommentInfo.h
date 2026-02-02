//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, StatusCommentMessageThumb;

@interface TextStateCommentInfo : NSObject
{
    _Bool _hadRead;
    _Bool _bNotify;
    _Bool _isDeleted;
    unsigned int _commentCount;
    NSString *_fromUsername;
    NSString *_textStateId;
    NSString *_content;
    NSString *_commentId;
    NSString *_rootCommentId;
    unsigned long long _timeStamp;
    NSString *_extInfo;
    NSString *_feedOwnerUsername;
    StatusCommentMessageThumb *_messageThumbData;
}

+ (id)GenerateCommentInfoWithDataItem:(id)arg1;
+ (void)__wcdb_index_15:(void *)arg1;
+ (void)__wcdb_table_constraint_14:(void *)arg1;
+ (void)__wcdb_table_constraint_13:(void *)arg1;
+ (void)__wcdb_table_constraint_12:(void *)arg1;
+ (id)swift_commentCount;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)commentCount;
+ (id)swift_feedOwnerUsername;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)feedOwnerUsername;
+ (id)swift_isDeleted;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)isDeleted;
+ (id)swift_bNotify;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)bNotify;
+ (id)swift_extInfo;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)extInfo;
+ (id)swift_hadRead;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)hadRead;
+ (id)swift_timeStamp;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)timeStamp;
+ (id)swift_rootCommentId;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)rootCommentId;
+ (id)swift_commentId;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)commentId;
+ (id)swift_content;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)content;
+ (id)swift_textStateId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)textStateId;
+ (id)swift_fromUsername;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)fromUsername;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) StatusCommentMessageThumb *messageThumbData; // @synthesize messageThumbData=_messageThumbData;
@property(nonatomic) unsigned int commentCount; // @synthesize commentCount=_commentCount;
@property(retain, nonatomic) NSString *feedOwnerUsername; // @synthesize feedOwnerUsername=_feedOwnerUsername;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(nonatomic) _Bool bNotify; // @synthesize bNotify=_bNotify;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) _Bool hadRead; // @synthesize hadRead=_hadRead;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSString *rootCommentId; // @synthesize rootCommentId=_rootCommentId;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *textStateId; // @synthesize textStateId=_textStateId;
@property(retain, nonatomic) NSString *fromUsername; // @synthesize fromUsername=_fromUsername;
- (id)notifyListReportParams;
- (id)statusID;
- (id)username;
- (id)profileContact;
- (unsigned int)createTime;
- (id)displayContent;

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

