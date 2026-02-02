//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol MTLComputePipelineState;

@interface TFLBufferConvert : NSObject
{
    id <MTLComputePipelineState> _program;
}

- (void).cxx_destruct;
- (void)convertWithEncoder:(id)arg1 shape:(const StrongShape_90d9bb64 *)arg2 sourceBuffer:(id)arg3 convertedBuffer:(id)arg4;
- (id)initWithDevice:(id)arg1 isFloat16:(_Bool)arg2 convertToPBHWC4:(_Bool)arg3;

@end

