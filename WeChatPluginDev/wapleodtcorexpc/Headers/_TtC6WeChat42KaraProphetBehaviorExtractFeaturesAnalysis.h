//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSDictionary, NSNumber, NSString;

@interface _TtC6WeChat42KaraProphetBehaviorExtractFeaturesAnalysis : NSObject
{
    MISSING_TYPE *time;
    MISSING_TYPE *heaviest;
    MISSING_TYPE *nulls;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_nulls;
+ (void)PBArrayAdd_heaviest;
+ (void)PBArrayAdd_time;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSArray *nulls;
@property(nonatomic, copy) NSDictionary *heaviest;
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

