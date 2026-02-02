//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface RfxPagSurfaceImpl : NSObject
{
    shared_ptr_4c3e2e39 _pagSurface;
}

+ (id)FromView:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_4c3e2e39 pagSurface; // @synthesize pagSurface=_pagSurface;
- (void)updateSize;
- (int)height;
- (int)width;
- (void)dealloc;
- (id)initWithSurface:(shared_ptr_4c3e2e39)arg1;

@end

