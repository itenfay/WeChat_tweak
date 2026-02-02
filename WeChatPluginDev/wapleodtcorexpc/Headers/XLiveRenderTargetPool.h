//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface XLiveRenderTargetPool : NSObject
{
    struct mutex _lock;
    struct vector<xnet::ObjectRef<rfx::RfxTexture>, std::allocator<xnet::ObjectRef<rfx::RfxTexture>>> _freeList;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (ObjectRef_32b092d4)acquireTexture;
- (void)pushTexture:(ObjectRef_32b092d4)arg1;

@end

