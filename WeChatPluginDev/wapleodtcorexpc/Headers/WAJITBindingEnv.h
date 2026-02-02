//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WAJITBindingMediaModule;

@interface WAJITBindingEnv : NSObject
{
    WAJITBindingMediaModule *_mediaModule;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAJITBindingMediaModule *mediaModule; // @synthesize mediaModule=_mediaModule;
- (void)onDestroyJITBindingContext;
- (void)onCreateJITBindingContext:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

