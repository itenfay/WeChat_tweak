//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMServiceProtocol <NSObject>

@optional
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)onServiceResumeBackgroundTask:(unsigned long long)arg1;
- (void)onServicePauseBackgroundTask:(unsigned long long)arg1;
- (void)onServiceClearMemoryCacheInBackground;
- (void)onServiceClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)onServiceMemoryWarning;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceInit;
@end

