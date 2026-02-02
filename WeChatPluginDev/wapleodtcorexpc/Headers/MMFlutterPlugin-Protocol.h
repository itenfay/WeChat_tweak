//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FlutterEngine, UIViewController;

@protocol MMFlutterPlugin <NSObject>

@optional
- (void)onDetachedToViewController;
- (void)onAttachedToViewController:(UIViewController *)arg1;
- (void)onDetachedFromEngine:(FlutterEngine *)arg1;
- (void)onAttachedToEngine:(FlutterEngine *)arg1;
@end

