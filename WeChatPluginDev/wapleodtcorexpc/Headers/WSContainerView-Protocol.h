//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSNumber;

@protocol WSContainerView <NSObject>
- (void)initViewIfNeed;

@optional
- (void)onContainerAppear;
- (void)onContainerDidDisappear;
- (void)onContainerWillDisappear;
- (void)onSwitchToOtherView:(NSNumber *)arg1;
- (void)onSwitchToThisView:(NSNumber *)arg1;
- (void)onQuitWSWebView:(_Bool)arg1;
- (void)onDidEnterWSWebView:(_Bool)arg1;
- (void)onEnterWSWebView:(_Bool)arg1;
- (NSNumber *)getCategoryId;
@end

