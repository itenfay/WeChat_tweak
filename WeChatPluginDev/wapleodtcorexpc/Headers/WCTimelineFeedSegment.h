//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTimelineFeedSegment : NSObject
{
    _Bool isAutoIncrement;
    unsigned int _groupId;
    unsigned int _feedsCount;
    NSString *_topFeedId;
    NSString *_bottomFeedId;
}

+ (void)__wcdb_column_constraint_108:(void *)arg1;
+ (void)__wcdb_column_constraint_107:(void *)arg1;
+ (void)__wcdb_index_106:(void *)arg1;
+ (void)__wcdb_column_constraint_105:(void *)arg1;
+ (id)swift_bottomFeedId;
+ (const void *)__wcdb_synthesize_104:(void *)arg1;
+ (const void *)bottomFeedId;
+ (id)swift_topFeedId;
+ (const void *)__wcdb_synthesize_103:(void *)arg1;
+ (const void *)topFeedId;
+ (id)swift_feedsCount;
+ (const void *)__wcdb_synthesize_102:(void *)arg1;
+ (const void *)feedsCount;
+ (id)swift_groupId;
+ (const void *)__wcdb_synthesize_101:(void *)arg1;
+ (const void *)groupId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bottomFeedId; // @synthesize bottomFeedId=_bottomFeedId;
@property(retain, nonatomic) NSString *topFeedId; // @synthesize topFeedId=_topFeedId;
@property(nonatomic) unsigned int feedsCount; // @synthesize feedsCount=_feedsCount;
@property(nonatomic) unsigned int groupId; // @synthesize groupId=_groupId;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,VisAutoIncrement

@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

