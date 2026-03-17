//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMPowerABTest : NSObject
{
    _Bool _disableCdnEnhance;
    _Bool _disableOffScreen;
    _Bool _enable30FPS;
    long long _audienceInterval;
    long long _anchorInterval;
    long long _modelGeneration;
}

@property(nonatomic) long long modelGeneration; // @synthesize modelGeneration=_modelGeneration;
@property(nonatomic) long long anchorInterval; // @synthesize anchorInterval=_anchorInterval;
@property(nonatomic) long long audienceInterval; // @synthesize audienceInterval=_audienceInterval;
@property(nonatomic) _Bool enable30FPS; // @synthesize enable30FPS=_enable30FPS;
@property(nonatomic) _Bool disableOffScreen; // @synthesize disableOffScreen=_disableOffScreen;
@property(nonatomic) _Bool disableCdnEnhance; // @synthesize disableCdnEnhance=_disableCdnEnhance;
- (_Bool)isNewDevice;
- (void)setup;
- (id)init;

@end

