//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSString;

@protocol WCMyDeviceInfoAssistDelegate <NSObject>
- (void)onEnterBrandSession;
- (void)onRemarkEdited:(NSString *)arg1;
- (void)onShowDeviceSession;
- (void)onUnbindDevice;
- (void)onBindDevice;
- (MMUIViewController *)getViewController;
@end

