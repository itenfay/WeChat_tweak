//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, StatusCommentMessageThumb;

@interface TextStateReferenceInfo : NSObject
{
    _Bool _isRead;
    _Bool _notify;
    unsigned int _createTime;
    unsigned int _type;
    unsigned int _referenceCount;
    NSString *_textStateId;
    NSString *_username;
    NSString *_extInfo;
    StatusCommentMessageThumb *_messageThumbData;
}

+ (id)referenceInfoFromStatusReferenced:(id)arg1 textStateId:(id)arg2;
+ (void)__wcdb_table_constraint_10:(void *)arg1;
+ (void)__wcdb_table_constraint_9:(void *)arg1;
+ (void)__wcdb_table_constraint_8:(void *)arg1;
+ (id)swift_type;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)type;
+ (id)swift_extInfo;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)extInfo;
+ (id)swift_notify;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)notify;
+ (id)swift_isRead;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)isRead;
+ (id)swift_referenceCount;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)referenceCount;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)username;
+ (id)swift_textStateId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)textStateId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) StatusCommentMessageThumb *messageThumbData; // @synthesize messageThumbData=_messageThumbData;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) _Bool notify; // @synthesize notify=_notify;
@property(nonatomic) _Bool isRead; // @synthesize isRead=_isRead;
@property(nonatomic) unsigned int referenceCount; // @synthesize referenceCount=_referenceCount;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *textStateId; // @synthesize textStateId=_textStateId;
- (id)notifyListReportParams;
- (id)statusID;
- (id)profileContact;

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

