//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol IMBLifecycle <NSObject>

@optional
- (void)onJSException:(NSString *)arg1 msg:(NSString *)arg2 extra:(NSDictionary *)arg3;
- (void)onDestroy:(int)arg1;
- (void)onPause;
- (void)onResume;
- (void)onMainScriptInjected:(NSString *)arg1;
- (void)onCreated;
@end

