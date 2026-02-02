//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTimelineGroupHint : NSObject
{
    unsigned int _groupId;
    NSString *_topFeedId;
    NSString *_bottomFeedId;
}

+ (void)__wcdb_column_constraint_86:(void *)arg1;
+ (void)__wcdb_column_constraint_85:(void *)arg1;
+ (void)__wcdb_column_constraint_84:(void *)arg1;
+ (void)__wcdb_index_83:(void *)arg1;
+ (void)__wcdb_column_constraint_82:(void *)arg1;
+ (id)swift_bottomFeedId;
+ (const void *)__wcdb_synthesize_81:(void *)arg1;
+ (const void *)bottomFeedId;
+ (id)swift_topFeedId;
+ (const void *)__wcdb_synthesize_80:(void *)arg1;
+ (const void *)topFeedId;
+ (id)swift_groupId;
+ (const void *)__wcdb_synthesize_79:(void *)arg1;
+ (const void *)groupId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bottomFeedId; // @synthesize bottomFeedId=_bottomFeedId;
@property(retain, nonatomic) NSString *topFeedId; // @synthesize topFeedId=_topFeedId;
@property(nonatomic) unsigned int groupId; // @synthesize groupId=_groupId;

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

