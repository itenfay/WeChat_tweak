//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCAudioModule;

@interface WCAudioModuleParam : NSObject
{
    WCAudioModule *_audioModuleBecomeActive;
    WCAudioModule *_audioModuleResignActive;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAudioModule *audioModuleResignActive; // @synthesize audioModuleResignActive=_audioModuleResignActive;
@property(retain, nonatomic) WCAudioModule *audioModuleBecomeActive; // @synthesize audioModuleBecomeActive=_audioModuleBecomeActive;

@end

