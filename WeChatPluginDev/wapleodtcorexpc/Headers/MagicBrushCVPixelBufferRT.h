//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol MagicBrushCVPixelBufferRTDelegate;

@interface MagicBrushCVPixelBufferRT
{
    id <MagicBrushCVPixelBufferRTDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MagicBrushCVPixelBufferRTDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFrameAvailable:(struct __CVBuffer *)arg1;
- (id)initForCanvas:(int)arg1 delegate:(id)arg2 inRuntime:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

