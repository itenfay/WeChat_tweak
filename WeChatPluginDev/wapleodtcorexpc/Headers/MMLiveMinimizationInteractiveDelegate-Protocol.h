//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIViewController;

@protocol MMLiveMinimizationInteractiveDelegate <NSObject>

@optional
- (UIViewController *)getCurrPresentingViewController;
- (void)onMinimizationInteractiveQuitDidEnd;
- (void)onMinimizationInteractiveQuitWillEnd;
- (void)onMinimizationInteractiveDidEnd:(_Bool)arg1;
- (void)onMinimizationInteractiveWillEnd:(_Bool)arg1;
- (_Bool)minimizationInteractiveShouldInvoke;
- (_Bool)minimizationInteractiveShouldBegin;
- (void)onMinimizationInteractiveDidBegin:(_Bool)arg1;
@end

