//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAPrefetchTargetInfo : NSObject
{
    unsigned int _scene;
    NSString *_username;
    NSString *_pagePath;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;

@end

