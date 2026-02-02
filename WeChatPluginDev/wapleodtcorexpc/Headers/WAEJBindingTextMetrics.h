//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAEJBindingTextMetrics
{
    CDStruct_de2edefb metrics;
}

+ (void *)_ptr_to_get_actualBoundingBoxDescent;
+ (void *)_ptr_to_get_actualBoundingBoxAscent;
+ (void *)_ptr_to_get_width;
+ (struct OpaqueJSValue *)createJSObjectWithContext:(struct OpaqueJSContext *)arg1 scriptView:(id)arg2 metrics:(CDStruct_869f9c67)arg3;
- (struct OpaqueJSValue *)_get_actualBoundingBoxDescent:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_actualBoundingBoxAscent:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_width:(struct OpaqueJSContext *)arg1;

@end

