//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GPUImageFramebuffer;

@protocol GPUImageInput <NSObject>
- (void)setCurrentlyReceivingMonochromeInput:(_Bool)arg1;
- (_Bool)wantsMonochromeInput;
- (_Bool)enabled;
- (_Bool)shouldIgnoreUpdatesToThisTarget;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)destroyFrameBuffer;
- (int)generateFrameBuffer:(_Bool)arg1 newSize:(struct CGSize)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)setInputFramebuffer:(GPUImageFramebuffer *)arg1 atIndex:(long long)arg2;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
@end

