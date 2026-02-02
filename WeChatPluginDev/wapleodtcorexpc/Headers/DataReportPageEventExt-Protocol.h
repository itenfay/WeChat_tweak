//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController;

@protocol DataReportPageEventExt <NSObject>

@optional
- (void)onPageEventDisappear:(NSString *)arg1 hash:(unsigned long long)arg2 pageId:(unsigned long long)arg3 bizGroupId:(unsigned long long)arg4 is4TabOfLauncherUI:(_Bool)arg5;
- (void)onPageEventAppear:(NSString *)arg1 hash:(unsigned long long)arg2 pageId:(unsigned long long)arg3 bizGroupId:(unsigned long long)arg4 is4TabOfLauncherUI:(_Bool)arg5;
- (void)onPageEventDisappear:(UIViewController *)arg1;
- (void)onPageEventAppear:(UIViewController *)arg1;
@end

