//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLayer;

@interface MMLayerCompositer : NSObject
{
    struct shared_ptr<WeVisionUtil::LayerCompositer> _nativeCompositer;
    MMLayer *_canvas;
    struct CGSize _canvasSize;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
- (void)setBackgroundImage:(unsigned int)arg1;
- (void)setBackgroundColorWithR:(float)arg1 G:(float)arg2 B:(float)arg3 A:(float)arg4;
- (void)renderToCurrentFrameBuffer;
- (void)renderToTexture:(unsigned int)arg1;
- (id)createSubLayer;
- (id)canvas;
- (id)init;

@end

