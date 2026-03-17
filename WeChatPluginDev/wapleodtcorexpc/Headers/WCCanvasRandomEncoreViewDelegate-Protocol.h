//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol WCCanvasRandomEncoreViewDelegate <NSObject>

@optional
- (void)onRandomEncoreActionCanceled;
- (void)onRandomEncoreActionFired;
- (void)onRandomEncoreViewSwitchToNormalState:(_Bool)arg1;
- (UIView *)onRandomEncoreFetchViewToNotice;
- (void)onRandomEncoreInitDone;
@end

