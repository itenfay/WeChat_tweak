//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSString, ScanQRCodeLogicParams;

@protocol ScanQRCodeUrlPrefixHandlerDelegate <NSObject>
- (ScanQRCodeLogicParams *)getScanQRCodeLogicParams;
- (NSString *)getScanQRCodeSourceWebViewControllerUrl;
- (void)onScanQRCodeUrlPrefixHandlerScanFinish;
- (void)onScanQRCodeUrlPrefixHandlerWithErrorMsg:(NSString *)arg1;
- (void)onScanQRCodeUrlPrefixHandlerEnd;
- (void)onScanQRCodeUrlPrefixHandlerStart;
- (MMUIViewController *)onScanQRCodeUrlPrefixHandlerRequestViewController;
@end

