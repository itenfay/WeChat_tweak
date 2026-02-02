//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderBulletCommentInfo : NSObject
{
    int _contentType;
    int _commentSource;
    int _userIdentity;
    unsigned long long _commentInfoId;
    NSString *_content;
    double _videoTimestamp;
    double _createTime;
    unsigned long long _cacheTime;
}

+ (void)__wcdb_index_10:(void *)arg1;
+ (void)__wcdb_column_constraint_9:(void *)arg1;
+ (void)__wcdb_column_constraint_8:(void *)arg1;
+ (id)swift_cacheTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)cacheTime;
+ (id)swift_userIdentity;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)userIdentity;
+ (id)swift_commentSource;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)commentSource;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_videoTimestamp;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)videoTimestamp;
+ (id)swift_content;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)content;
+ (id)swift_contentType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)contentType;
+ (id)swift_commentInfoId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)commentInfoId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime=_cacheTime;
@property(nonatomic) int userIdentity; // @synthesize userIdentity=_userIdentity;
@property(nonatomic) int commentSource; // @synthesize commentSource=_commentSource;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
@property(nonatomic) double videoTimestamp; // @synthesize videoTimestamp=_videoTimestamp;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;
@property(nonatomic) unsigned long long commentInfoId; // @synthesize commentInfoId=_commentInfoId;
@property(readonly, copy) NSString *description;
- (id)initWithBulletCommentInfo:(id)arg1;

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

