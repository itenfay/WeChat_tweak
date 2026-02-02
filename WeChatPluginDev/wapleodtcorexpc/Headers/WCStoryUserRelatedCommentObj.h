//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCStoryMediaItem;

@interface WCStoryUserRelatedCommentObj : NSObject
{
    _Bool _isConcerned;
    unsigned int _dataItemCreateTime;
    unsigned int _commentCreateTime;
    NSString *_tid;
    long long _maxCommentId;
    long long _readCommentId;
    NSString *_username;
    WCStoryMediaItem *_thumbURLItem;
}

+ (void)__wcdb_index_37:(void *)arg1;
+ (void)__wcdb_index_36:(void *)arg1;
+ (void)__wcdb_column_constraint_35:(void *)arg1;
+ (id)swift_isConcerned;
+ (const void *)__wcdb_synthesize_34:(void *)arg1;
+ (const void *)isConcerned;
+ (id)swift_commentCreateTime;
+ (const void *)__wcdb_synthesize_33:(void *)arg1;
+ (const void *)commentCreateTime;
+ (id)swift_dataItemCreateTime;
+ (const void *)__wcdb_synthesize_32:(void *)arg1;
+ (const void *)dataItemCreateTime;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_31:(void *)arg1;
+ (const void *)username;
+ (id)swift_readCommentId;
+ (const void *)__wcdb_synthesize_30:(void *)arg1;
+ (const void *)readCommentId;
+ (id)swift_maxCommentId;
+ (const void *)__wcdb_synthesize_29:(void *)arg1;
+ (const void *)maxCommentId;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_28:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) WCStoryMediaItem *thumbURLItem; // @synthesize thumbURLItem=_thumbURLItem;
@property(nonatomic) _Bool isConcerned; // @synthesize isConcerned=_isConcerned;
@property(nonatomic) unsigned int commentCreateTime; // @synthesize commentCreateTime=_commentCreateTime;
@property(nonatomic) unsigned int dataItemCreateTime; // @synthesize dataItemCreateTime=_dataItemCreateTime;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) long long readCommentId; // @synthesize readCommentId=_readCommentId;
@property(nonatomic) long long maxCommentId; // @synthesize maxCommentId=_maxCommentId;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(readonly, copy) NSString *description;

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

