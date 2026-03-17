//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIImage, WCPlayLiveWithoutLoginGetQRCodeCGI;

@protocol WCPlayLiveWithoutLoginGetQRCodeDelegate <NSObject>
- (void)onGetQRCodeFail;
- (void)onGetQRCodeSuccuss:(WCPlayLiveWithoutLoginGetQRCodeCGI *)arg1 image:(UIImage *)arg2 token:(NSString *)arg3;
@end

