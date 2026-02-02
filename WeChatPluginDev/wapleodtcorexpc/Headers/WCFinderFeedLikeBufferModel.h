//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCFinderFeedLikeBufferModel : NSObject
{
    int _scene;
    NSString *_tid;
    NSData *_likeBuffer;
    long long _incFriendLikeCount;
}

+ (void)__wcdb_index_6:(void *)arg1;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (id)swift_incFriendLikeCount;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)incFriendLikeCount;
+ (id)swift_scene;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)scene;
+ (id)swift_likeBuffer;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)likeBuffer;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) long long incFriendLikeCount; // @synthesize incFriendLikeCount=_incFriendLikeCount;
@property(retain, nonatomic) NSData *likeBuffer; // @synthesize likeBuffer=_likeBuffer;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;

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

