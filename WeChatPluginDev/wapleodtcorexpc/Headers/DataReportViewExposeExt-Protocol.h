//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView, UIViewController;

@protocol DataReportViewExposeExt <NSObject>

@optional
- (void)onVCUnExpose:(UIViewController *)arg1 checkType:(unsigned long long)arg2;
- (void)onVCExpose:(UIViewController *)arg1 checkType:(unsigned long long)arg2;
- (void)onViewUnExpose:(UIView *)arg1 checkType:(unsigned long long)arg2;
- (void)onViewExpose:(UIView *)arg1 checkType:(unsigned long long)arg2;
@end

