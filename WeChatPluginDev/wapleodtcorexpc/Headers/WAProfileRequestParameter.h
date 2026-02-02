//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAProfileRequestParameter : NSObject
{
    long long _scene;
    NSString *_pagePath;
    NSString *_sessionBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(retain, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(nonatomic) long long scene; // @synthesize scene=_scene;

@end

