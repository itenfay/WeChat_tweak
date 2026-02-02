//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLinearRegressionResult : NSObject
{
    double _slope;
    double _intercept;
    double _correlation;
}

@property(nonatomic) double correlation; // @synthesize correlation=_correlation;
@property(nonatomic) double intercept; // @synthesize intercept=_intercept;
@property(nonatomic) double slope; // @synthesize slope=_slope;

@end

