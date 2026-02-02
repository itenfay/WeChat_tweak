//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <QuartzCore/CALayer.h>

@class YYSentinel;

@interface YYAsyncLayer : CALayer
{
    YYSentinel *_sentinel;
    _Bool _displaysAsynchronously;
}

+ (id)defaultValueForKey:(id)arg1;
- (void).cxx_destruct;
@property _Bool displaysAsynchronously; // @synthesize displaysAsynchronously=_displaysAsynchronously;
- (void)_setLayerContents:(id)arg1;
- (void)_cancelAsyncDisplay;
- (void)_fillBackgroundColor:(struct CGColor *)arg1 size:(struct CGSize)arg2 inContext:(struct CGContext *)arg3;
- (void)_endImageContext:(struct CGContext *)arg1;
- (struct CGContext *)_newImageContextWithOptions:(struct CGSize)arg1 opaque:(_Bool)arg2 scale:(double)arg3;
- (void)_displayAsync:(_Bool)arg1;
- (void)clearContents;
- (void)setContents:(id)arg1;
- (void)display;
- (_Bool)isShowingOnKeyWindow;
- (void)setNeedsDisplay;
- (void)dealloc;
- (id)init;

@end

