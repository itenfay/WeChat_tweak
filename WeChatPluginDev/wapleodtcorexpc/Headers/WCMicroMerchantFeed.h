//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCMicroMerchantFeed : NSObject
{
    unsigned int _groupTime;
    unsigned int _status;
    int _topFeedType;
    NSString *_feedId;
    NSString *_groupId;
    NSString *_username;
    NSString *_title;
    NSString *_titleV2;
}

+ (void)__wcdb_column_constraint_100:(void *)arg1;
+ (void)__wcdb_index_99:(void *)arg1;
+ (void)__wcdb_column_constraint_98:(void *)arg1;
+ (void)__wcdb_column_constraint_97:(void *)arg1;
+ (void)__wcdb_column_constraint_96:(void *)arg1;
+ (void)__wcdb_column_constraint_95:(void *)arg1;
+ (id)swift_topFeedType;
+ (const void *)__wcdb_synthesize_94:(void *)arg1;
+ (const void *)topFeedType;
+ (id)swift_titleV2;
+ (const void *)__wcdb_synthesize_93:(void *)arg1;
+ (const void *)titleV2;
+ (id)swift_status;
+ (const void *)__wcdb_synthesize_92:(void *)arg1;
+ (const void *)status;
+ (id)swift_title;
+ (const void *)__wcdb_synthesize_91:(void *)arg1;
+ (const void *)title;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_90:(void *)arg1;
+ (const void *)username;
+ (id)swift_groupTime;
+ (const void *)__wcdb_synthesize_89:(void *)arg1;
+ (const void *)groupTime;
+ (id)swift_groupId;
+ (const void *)__wcdb_synthesize_88:(void *)arg1;
+ (const void *)groupId;
+ (id)swift_feedId;
+ (const void *)__wcdb_synthesize_87:(void *)arg1;
+ (const void *)feedId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) int topFeedType; // @synthesize topFeedType=_topFeedType;
@property(retain, nonatomic) NSString *titleV2; // @synthesize titleV2=_titleV2;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) unsigned int groupTime; // @synthesize groupTime=_groupTime;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
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

