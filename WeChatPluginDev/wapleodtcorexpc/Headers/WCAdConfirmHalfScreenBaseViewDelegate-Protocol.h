//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCAdConfirmHalfScreenBaseInfo;

@protocol WCAdConfirmHalfScreenBaseViewDelegate <NSObject>

@optional
- (void)onConfirmViewDidDisappearWithConfirmInfo:(WCAdConfirmHalfScreenBaseInfo *)arg1;
- (void)onConfirmViewConfirmButtonClickWithConfirmInfo:(WCAdConfirmHalfScreenBaseInfo *)arg1;
@end

