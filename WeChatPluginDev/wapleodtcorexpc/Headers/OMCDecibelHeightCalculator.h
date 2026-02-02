//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMCDecibelHeightCalculator : NSObject
{
    struct SharedPtr<XMFDecibelHeightCalcF32> _backingCalc;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)calculateHeightsWithDecibels:(const void *)arg1 outputHeights:(void *)arg2;
- (id)initWithMaxHeight:(float)arg1 minDecibel:(float)arg2 powerRatio:(float)arg3;

@end

