//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CameraScanCodesMarkDotInfo, UIButton;

@protocol QRCodeInMultiDisplayViewDelegate <NSObject>
- (void)onDotViewClicked:(CameraScanCodesMarkDotInfo *)arg1;
- (void)onCancelBtnClicked:(UIButton *)arg1;
@end

