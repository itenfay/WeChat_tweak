//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TPMTLDisplayConfig;
@protocol CAMetalDrawable;

@protocol TPMTLDrawable <NSObject>
- (void)cleanupRenderResources;
- (void)prepareRenderResources;
- (id <CAMetalDrawable>)currentDrawable;
- (TPMTLDisplayConfig *)getDisplayConfig;
@end

