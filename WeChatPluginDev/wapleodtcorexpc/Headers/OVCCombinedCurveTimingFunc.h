//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OVCCombinedCurveTimingFunc : NSObject
{
    struct SharedPtr<XMFCombinedCurveTimingFunc> _backingTimingFunc;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (CDStruct_1b6d18a9)reverseMapTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)mapTime:(CDStruct_1b6d18a9)arg1;
- (id)initWithSourceDuration:(CDStruct_1b6d18a9)arg1 targetDuration:(CDStruct_1b6d18a9)arg2 controlPoints:(id)arg3;

@end

