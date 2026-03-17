//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIViewController;

@protocol WCImageSearchEventDelegate <NSObject>
- (UIViewController *)getViewController;
- (void)onGetNoResult;
- (void)onImageExpired;
- (void)onNetworkError;
@end

