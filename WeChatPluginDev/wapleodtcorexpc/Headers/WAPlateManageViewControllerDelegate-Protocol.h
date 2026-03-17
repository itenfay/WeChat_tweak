//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol WAPlateManageViewControllerDelegate <NSObject>
- (void)onWAPlateManageViewControllerGetErrCode:(int)arg1 errorMsg:(NSString *)arg2;
- (void)onWAPlateManageViewControllerDismiss:(NSArray *)arg1;
@end

