//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, WCAdDynamicCanvasDSLFallbackInfo, WCAdDynamicCanvasDSLHalfScreenInfo;

@interface WCAdDynamicCanvasDSLData : NSObject
{
    NSArray *_preload;
    WCAdDynamicCanvasDSLFallbackInfo *_fallback;
    WCAdDynamicCanvasDSLHalfScreenInfo *_halfScreenInfo;
}

+ (id)fromDSLJson:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdDynamicCanvasDSLHalfScreenInfo *halfScreenInfo; // @synthesize halfScreenInfo=_halfScreenInfo;
@property(retain, nonatomic) WCAdDynamicCanvasDSLFallbackInfo *fallback; // @synthesize fallback=_fallback;
@property(retain, nonatomic) NSArray *preload; // @synthesize preload=_preload;

@end

