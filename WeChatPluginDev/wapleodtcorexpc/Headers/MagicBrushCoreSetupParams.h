//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MagicBrushCoreSetupParams : NSObject
{
    _Bool _enablePerformance;
    _Bool _isNativeRenderMode;
    _Bool _autoHighFreshRate;
    NSString *_renderThreadName;
    long long _enableParallelShaderCompile;
}

- (void).cxx_destruct;
@property(nonatomic) long long enableParallelShaderCompile; // @synthesize enableParallelShaderCompile=_enableParallelShaderCompile;
@property(retain, nonatomic) NSString *renderThreadName; // @synthesize renderThreadName=_renderThreadName;
@property(nonatomic) _Bool autoHighFreshRate; // @synthesize autoHighFreshRate=_autoHighFreshRate;
@property(nonatomic) _Bool isNativeRenderMode; // @synthesize isNativeRenderMode=_isNativeRenderMode;
@property(nonatomic) _Bool enablePerformance; // @synthesize enablePerformance=_enablePerformance;

@end

