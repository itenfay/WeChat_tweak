//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface SkiaCanvasTexture : NSObject
{
}

+ (id)shareInstance;
- (struct __CVBuffer *)copyPixelBufferByViewId:(unsigned int)arg1 andAppTag:(id)arg2;
- (void)setDelegate:(id)arg1 andAppTag:(id)arg2;
- (id)init;

@end

