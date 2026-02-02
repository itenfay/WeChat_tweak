//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCStoryUnReadComment : NSObject
{
    unsigned int _createTime;
    unsigned int _commentType;
    NSString *_tid;
    NSString *_commentId;
}

+ (void)__wcdb_index_9:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_index_7:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (id)swift_commentType;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)commentType;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_commentId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)commentId;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
+ (id)unreadCommentWithStoryComment:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int commentType; // @synthesize commentType=_commentType;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (id)initWithStoryComment:(id)arg1;

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

