//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MMDiskBizStatAggregation, NSString;

@interface _TtC6WeChat28MMDiskBizStatDayAggregations : NSObject
{
    MISSING_TYPE *lessThan1;
    MISSING_TYPE *between1To3;
    MISSING_TYPE *between3To7;
    MISSING_TYPE *between7To15;
    MISSING_TYPE *between15To30;
    MISSING_TYPE *between30To90;
    MISSING_TYPE *between90To180;
    MISSING_TYPE *between180To360;
    MISSING_TYPE *moreThan360;
}

+ (void)initialize;
+ (void)PBArrayAdd_moreThan360;
+ (void)PBArrayAdd_between180To360;
+ (void)PBArrayAdd_between90To180;
+ (void)PBArrayAdd_between30To90;
+ (void)PBArrayAdd_between15To30;
+ (void)PBArrayAdd_between7To15;
+ (void)PBArrayAdd_between3To7;
+ (void)PBArrayAdd_between1To3;
+ (void)PBArrayAdd_lessThan1;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (void)add:(id)arg1;
- (id)aggregationForInterval:(double)arg1;
@property(nonatomic, retain) MMDiskBizStatAggregation *moreThan360; // @synthesize moreThan360;
@property(nonatomic, retain) MMDiskBizStatAggregation *between180To360; // @synthesize between180To360;
@property(nonatomic, retain) MMDiskBizStatAggregation *between90To180; // @synthesize between90To180;
@property(nonatomic, retain) MMDiskBizStatAggregation *between30To90; // @synthesize between30To90;
@property(nonatomic, retain) MMDiskBizStatAggregation *between15To30; // @synthesize between15To30;
@property(nonatomic, retain) MMDiskBizStatAggregation *between7To15; // @synthesize between7To15;
@property(nonatomic, retain) MMDiskBizStatAggregation *between3To7; // @synthesize between3To7;
@property(nonatomic, retain) MMDiskBizStatAggregation *between1To3; // @synthesize between1To3;
@property(nonatomic, retain) MMDiskBizStatAggregation *lessThan1; // @synthesize lessThan1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

