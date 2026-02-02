//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CdnRenderContextWrapper, VisEffectRenderContextWrapper;

@interface WeeffectRenderContextWrapper : NSObject
{
    long long _renderType;
    VisEffectRenderContextWrapper *_visContextWrapper;
    CdnRenderContextWrapper *_cdnContextWrapper;
}

- (void).cxx_destruct;
@property(retain) CdnRenderContextWrapper *cdnContextWrapper; // @synthesize cdnContextWrapper=_cdnContextWrapper;
@property(retain) VisEffectRenderContextWrapper *visContextWrapper; // @synthesize visContextWrapper=_visContextWrapper;
@property long long renderType; // @synthesize renderType=_renderType;
- (id)initWithCdnContext:(id)arg1;
- (id)initWithVisContext:(id)arg1;

@end

