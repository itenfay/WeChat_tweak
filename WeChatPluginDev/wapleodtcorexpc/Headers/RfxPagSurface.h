//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class RfxPagSurfaceImpl;

@interface RfxPagSurface : NSObject
{
    RfxPagSurfaceImpl *_surface;
}

+ (id)FromView:(id)arg1;
@property(retain, nonatomic) RfxPagSurfaceImpl *surface; // @synthesize surface=_surface;
- (void)updateSize;
- (int)height;
- (int)width;
- (void)dealloc;
- (id)impl;

@end

