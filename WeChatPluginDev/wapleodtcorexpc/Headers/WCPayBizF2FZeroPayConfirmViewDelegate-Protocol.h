//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCPayBizF2FZeroPayConfirmViewDelegate <NSObject>
- (void)onWCPayBizF2FZeroPayConfirmViewCancel;
- (void)onWCPayBizF2FZeroPayConfirmViewConfirmWithFingerData:(NSString *)arg1;
- (void)onWCPayBizF2FZeroPayConfirmViewConfirmWithPassword:(NSString *)arg1;
@end

