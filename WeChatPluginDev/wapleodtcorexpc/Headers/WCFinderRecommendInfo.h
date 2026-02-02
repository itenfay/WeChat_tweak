//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class DynamicReason, FinderFlowCardRecommendReason, FinderObjectWordingInfo, NSString;

@interface WCFinderRecommendInfo : NSObject
{
    int _recommendType;
    NSString *_tid;
    unsigned long long _scene;
    NSString *_recommendReason;
    unsigned long long _orgRecommendType;
    FinderFlowCardRecommendReason *_flowCardRecommandReasonInfo;
    NSString *_flowDescTitle;
    NSString *_innerRecommendReason;
    DynamicReason *_dynamicReason;
    FinderObjectWordingInfo *_asyncReasonInfo;
}

+ (void)__wcdb_table_constraint_11:(void *)arg1;
+ (void)__wcdb_table_constraint_10:(void *)arg1;
+ (id)swift_asyncReasonInfo;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)asyncReasonInfo;
+ (id)swift_innerRecommendReason;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)innerRecommendReason;
+ (id)swift_dynamicReason;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)dynamicReason;
+ (id)swift_flowDescTitle;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)flowDescTitle;
+ (id)swift_flowCardRecommandReasonInfo;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)flowCardRecommandReasonInfo;
+ (id)swift_scene;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)scene;
+ (id)swift_orgRecommendType;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)orgRecommendType;
+ (id)swift_recommendReason;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)recommendReason;
+ (id)swift_recommendType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)recommendType;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderObjectWordingInfo *asyncReasonInfo; // @synthesize asyncReasonInfo=_asyncReasonInfo;
@property(retain, nonatomic) DynamicReason *dynamicReason; // @synthesize dynamicReason=_dynamicReason;
@property(retain, nonatomic) NSString *innerRecommendReason; // @synthesize innerRecommendReason=_innerRecommendReason;
@property(retain, nonatomic) NSString *flowDescTitle; // @synthesize flowDescTitle=_flowDescTitle;
@property(retain, nonatomic) FinderFlowCardRecommendReason *flowCardRecommandReasonInfo; // @synthesize flowCardRecommandReasonInfo=_flowCardRecommandReasonInfo;
@property(nonatomic) unsigned long long orgRecommendType; // @synthesize orgRecommendType=_orgRecommendType;
@property(copy, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(nonatomic) int recommendType; // @synthesize recommendType=_recommendType;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
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

