//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MagicBrushCore;

@interface MagicBrushRenderTarget : NSObject
{
    int _canvasId;
    MagicBrushCore *_magicbrush;
    struct RenderTarget *_target;
}

- (void).cxx_destruct;
@property(nonatomic) struct RenderTarget *target; // @synthesize target=_target;
@property(nonatomic) __weak MagicBrushCore *magicbrush; // @synthesize magicbrush=_magicbrush;
@property(nonatomic) int canvasId; // @synthesize canvasId=_canvasId;
- (void)dealloc;
- (void)resetTarget;
- (void)destroy;

@end

