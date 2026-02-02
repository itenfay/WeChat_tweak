//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol MTLDevice, TPMTLFrameRenderer;

@interface TPMTLGeneralFrameRenderer : NSObject
{
    id <TPMTLFrameRenderer> _renderer;
    id <MTLDevice> _mtlDevice;
}

- (void).cxx_destruct;
@property(retain) id <MTLDevice> mtlDevice; // @synthesize mtlDevice=_mtlDevice;
@property(retain) id <TPMTLFrameRenderer> renderer; // @synthesize renderer=_renderer;
- (_Bool)render:(struct TPFrame *)arg1 destination:(id)arg2;
- (id)getRendererByFrame:(struct TPFrame *)arg1;
- (id)initWithMetalDevice:(id)arg1;

@end

