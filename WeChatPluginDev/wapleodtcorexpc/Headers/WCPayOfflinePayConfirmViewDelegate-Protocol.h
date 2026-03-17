//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCPayOfflinePayConfirmView;

@protocol WCPayOfflinePayConfirmViewDelegate <NSObject>
- (void)onOfflinePayConfirmViewCancel:(WCPayOfflinePayConfirmView *)arg1 routeInfo:(unsigned char)arg2;
- (void)onOfflinePayConfirmViewPay:(WCPayOfflinePayConfirmView *)arg1 passwd:(NSString *)arg2 routeInfo:(unsigned char)arg3;
@end

