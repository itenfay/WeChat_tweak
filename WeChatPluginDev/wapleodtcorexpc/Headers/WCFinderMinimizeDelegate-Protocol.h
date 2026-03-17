//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderMinimizeBizKeyProvider-Protocol.h"

@class NSArray, UIView, WCFinderMinimizePlayInfo;

@protocol WCFinderMinimizeDelegate <WCFinderMinimizeBizKeyProvider>
- (long long)autoMinimizeControlFlag;
- (void)onMinimizeResotreContentView:(UIView *)arg1 cleanPauseStatus:(_Bool)arg2;
- (NSArray *)minimizeConflictScrollViews;
- (_Bool)dismissMinimizeWhenLimitMode;
- (WCFinderMinimizePlayInfo *)requestMinimizeInfo:(_Bool)arg1;
- (_Bool)checkNeedInterruptMinimize;
- (_Bool)checkIsDisableMinimize;

@optional
- (void)updateNewMinimizeInfo:(WCFinderMinimizePlayInfo *)arg1;
- (_Bool)shouldAutoMinimizeWhenPopOrDismiss;
- (void)onOpenMinimizedFromFloatingView:(WCFinderMinimizePlayInfo *)arg1;
@end

