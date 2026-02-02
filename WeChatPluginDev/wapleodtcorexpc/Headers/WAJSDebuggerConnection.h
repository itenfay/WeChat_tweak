//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WAJSCoreService;

@interface WAJSDebuggerConnection : NSObject
{
    WAJSCoreService *_service;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WAJSCoreService *service; // @synthesize service=_service;
- (void)onReceiveNetworkHeader:(id)arg1;
- (void)onCustomMessage:(id)arg1 payload:(id)arg2;
- (void)sendCustomMessage:(id)arg1 payload:(id)arg2;
- (void)onMessage:(id)arg1;
- (void)sendMessage:(id)arg1;
- (id)initWithService:(id)arg1;

@end

