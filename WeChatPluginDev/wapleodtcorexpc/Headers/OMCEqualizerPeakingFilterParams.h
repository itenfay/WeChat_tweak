//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMCEqualizerPeakingFilterParams : NSObject
{
    float _fc;
    float _gain;
    float _Q;
}

@property(nonatomic) float Q; // @synthesize Q=_Q;
@property(nonatomic) float gain; // @synthesize gain=_gain;
@property(nonatomic) float fc; // @synthesize fc=_fc;
- (id)description;
- (id)init;

@end

