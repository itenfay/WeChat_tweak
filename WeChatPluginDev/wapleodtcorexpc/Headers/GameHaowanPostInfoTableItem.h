//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface GameHaowanPostInfoTableItem
{
    _Bool _isMiniGameVideo;
    _Bool _needDelAfterPost;
    _Bool _isBroken;
    unsigned int _postType;
    unsigned int _fromSource;
    unsigned int _retryCount;
    int _publishState;
    NSString *_postId;
    NSString *_extra;
    unsigned long long _createTime;
    NSString *_videoId;
    NSArray *_mediaList;
}

+ (void)__wcdb_column_constraint_10:(void *)arg1;
+ (id)swift_needDelAfterPost;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)needDelAfterPost;
+ (id)swift_videoId;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)videoId;
+ (id)swift_isMiniGameVideo;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)isMiniGameVideo;
+ (id)swift_publishState;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)publishState;
+ (id)swift_retryCount;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)retryCount;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_fromSource;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)fromSource;
+ (id)swift_extra;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)extra;
+ (id)swift_postType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)postType;
+ (id)swift_postId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)postId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isBroken; // @synthesize isBroken=_isBroken;
@property(retain, nonatomic) NSArray *mediaList; // @synthesize mediaList=_mediaList;
@property(nonatomic) _Bool needDelAfterPost; // @synthesize needDelAfterPost=_needDelAfterPost;
@property(retain, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(nonatomic) _Bool isMiniGameVideo; // @synthesize isMiniGameVideo=_isMiniGameVideo;
@property(nonatomic) int publishState; // @synthesize publishState=_publishState;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int fromSource; // @synthesize fromSource=_fromSource;
@property(retain, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(nonatomic) unsigned int postType; // @synthesize postType=_postType;
@property(retain, nonatomic) NSString *postId; // @synthesize postId=_postId;

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

