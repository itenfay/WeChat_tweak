//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WAJSCoreService;

@interface WAJSThread : NSObject
{
    _Bool _isDebuging;
    WAJSCoreService *_service;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WAJSCoreService *service; // @synthesize service=_service;
@property(readonly, nonatomic) _Bool isDebuging; // @synthesize isDebuging=_isDebuging;
- (void)resume;
- (void)suspend;
- (id)initWithService:(id)arg1;

@end

