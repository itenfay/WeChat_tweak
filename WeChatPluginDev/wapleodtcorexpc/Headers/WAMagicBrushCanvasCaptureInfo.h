//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MagicBrushCVPixelBufferRT, NSMapTable;

@interface WAMagicBrushCanvasCaptureInfo : NSObject
{
    MagicBrushCVPixelBufferRT *_rendertarget;
    NSMapTable *_delegateMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *delegateMap; // @synthesize delegateMap=_delegateMap;
@property(retain, nonatomic) MagicBrushCVPixelBufferRT *rendertarget; // @synthesize rendertarget=_rendertarget;
- (id)init;

@end

