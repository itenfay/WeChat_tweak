//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCPayOfflinePaySelectPayCardViewDelegate <NSObject>
- (void)onSelectPayCardViewClickForbidTinyAppUsername:(NSString *)arg1 appPath:(NSString *)arg2 isFQF:(_Bool)arg3;
- (void)onSelectPayCardViewClickForbidUrl:(NSString *)arg1 isFQF:(_Bool)arg2;
- (void)onSelectPayCardViewReturnWithNewSelectCardBindSerial:(NSString *)arg1;
- (void)onSelectPayCardViewCancel;
@end

