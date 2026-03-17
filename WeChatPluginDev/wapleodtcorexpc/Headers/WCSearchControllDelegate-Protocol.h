//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCSearchControllDelegate <NSObject>

@optional
- (void)onWCSearchControllerAccessibilityPerformEscape;
- (void)onWCSearchControllerDidDisappear:(_Bool)arg1;
- (void)onWCSearchControllerWillDisappear:(_Bool)arg1;
- (void)onWCSearchControllerDidAppear:(_Bool)arg1;
- (void)onWCSearchControllerWillAppear:(_Bool)arg1;
- (void)onWCSearchControllerDidLoad;
@end

