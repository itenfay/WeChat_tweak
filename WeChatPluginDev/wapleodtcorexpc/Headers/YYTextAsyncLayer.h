//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <QuartzCore/CALayer.h>

@class _YYTextSentinel;

@interface YYTextAsyncLayer : CALayer
{
    _YYTextSentinel *_sentinel;
    _Bool _displaysAsynchronously;
}

+ (id)defaultValueForKey:(id)arg1;
- (void).cxx_destruct;
@property _Bool displaysAsynchronously; // @synthesize displaysAsynchronously=_displaysAsynchronously;
- (void)_cancelAsyncDisplay;
- (void)_displayAsync:(_Bool)arg1;
- (void)display;
- (void)setNeedsDisplay;
- (void)dealloc;
- (id)init;

@end

