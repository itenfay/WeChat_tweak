//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSNumber, NSString, _TtC6WeChat42KaraProphetBehaviorExtractFeaturesAnalysis;

@interface _TtC6WeChat34KaraProphetBehaviorPredictAnalysis : NSObject
{
    MISSING_TYPE *time;
    MISSING_TYPE *error;
    MISSING_TYPE *modelDescription;
    MISSING_TYPE *extractFeatures;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_extractFeatures;
+ (void)PBArrayAdd_modelDescription;
+ (void)PBArrayAdd_error;
+ (void)PBArrayAdd_time;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, retain) _TtC6WeChat42KaraProphetBehaviorExtractFeaturesAnalysis *extractFeatures; // @synthesize extractFeatures;
@property(nonatomic, copy) NSString *modelDescription;
@property(nonatomic, copy) NSString *error;
@property(nonatomic, retain) NSNumber *time;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

