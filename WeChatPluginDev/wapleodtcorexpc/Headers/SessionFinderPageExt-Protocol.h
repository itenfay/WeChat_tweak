//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController;

@protocol SessionFinderPageExt <NSObject>

@optional
- (void)onFinderPageEnter:(NSString *)arg1 vc:(UIViewController *)arg2;
- (void)onFinderPageQuit:(NSString *)arg1 vc:(UIViewController *)arg2;
- (void)onFinderPageAppear:(NSString *)arg1 logID:(unsigned long long)arg2;
- (void)onFinderPageDisappear:(NSString *)arg1 logID:(unsigned long long)arg2;
@end

