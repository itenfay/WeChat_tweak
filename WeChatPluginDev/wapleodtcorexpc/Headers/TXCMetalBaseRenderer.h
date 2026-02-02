//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TXCMetalContext, TXCMetalPixelBufferUploader;

@interface TXCMetalBaseRenderer : NSObject
{
    TXCMetalPixelBufferUploader *_pixelBufferUploader;
    TXCMetalContext *_context;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TXCMetalContext *context; // @synthesize context=_context;
- (void)setDisplayConfig:(id)arg1;
- (unsigned long long)rendererType;
- (id)drawToTarget:(id)arg1 coordinate:(id)arg2;
- (void)uploadPixelBuffer:(struct __CVBuffer *)arg1;
@property(readonly, nonatomic) TXCMetalPixelBufferUploader *pixelBufferUploader; // @synthesize pixelBufferUploader=_pixelBufferUploader;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

