//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TXCMetalContext, TXCMetalDisplayConfig;
@protocol TXCMetalRenderer;

@interface TXCMetalRenderer : NSObject
{
    id <TXCMetalRenderer> _rendererImpl;
    TXCMetalContext *_context;
    TXCMetalDisplayConfig *_displayConfig;
}

- (void).cxx_destruct;
- (void)setDisplayConfig:(id)arg1;
- (unsigned long long)rendererType;
- (id)drawMetalTexture:(id)arg1 toTarget:(id)arg2 coordinate:(id)arg3;
- (id)drawToTarget:(id)arg1 coordinate:(id)arg2;
- (void)uploadPixelBuffer:(struct __CVBuffer *)arg1;
- (void)updateRenderWithRenderTypeIfNeed:(unsigned long long)arg1;
- (unsigned long long)convertFormatToRenderType:(unsigned int)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

