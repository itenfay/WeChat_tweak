//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMLinearRegression : NSObject
{
    NSMutableArray *_workingArray;
    double _slope;
    double _intercept;
    double _correlation;
    double _sumY;
    double _sumX;
    double _sumXY;
    double _sumX2;
    double _sumY2;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) double sumY2; // @synthesize sumY2=_sumY2;
@property(nonatomic) double sumX2; // @synthesize sumX2=_sumX2;
@property(nonatomic) double sumXY; // @synthesize sumXY=_sumXY;
@property(nonatomic) double sumX; // @synthesize sumX=_sumX;
@property(nonatomic) double sumY; // @synthesize sumY=_sumY;
@property(nonatomic) double correlation; // @synthesize correlation=_correlation;
@property(nonatomic) double intercept; // @synthesize intercept=_intercept;
@property(nonatomic) double slope; // @synthesize slope=_slope;
@property(retain, nonatomic) NSMutableArray *workingArray; // @synthesize workingArray=_workingArray;
- (id)calculateRegression:(id)arg1;
- (id)calculate;
- (id)getArray;
- (void)clear;
- (void)addDataObject:(id)arg1;

@end

