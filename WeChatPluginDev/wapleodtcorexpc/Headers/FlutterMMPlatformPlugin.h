//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FlutterMMPlatformPlugin : NSObject
{
}

- (id)getWeChatRevisionWithError:(id *)arg1;
- (id)isScreenOnWithError:(id *)arg1;
- (void)mediumVibrateForce:(_Bool)arg1 error:(id *)arg2;
- (void)lightVibrateForce:(_Bool)arg1 error:(id *)arg2;
- (id)getAppVersionWithError:(id *)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

