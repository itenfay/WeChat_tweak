//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, SplashCacheInfo, UIColor;

@interface WASkylinePageCfg : NSObject
{
    UIColor *_backgroundColorContent;
    NSString *_pagePath;
    SplashCacheInfo *_splashCacheInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SplashCacheInfo *splashCacheInfo; // @synthesize splashCacheInfo=_splashCacheInfo;
@property(retain, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(retain, nonatomic) UIColor *backgroundColorContent; // @synthesize backgroundColorContent=_backgroundColorContent;

@end

