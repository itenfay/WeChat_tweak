//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class HoneyPayHomeViewController, HoneyPayListResp_HoneyPayRecord;

@protocol HoneyPayHomeViewControllerDelegate <NSObject>
- (void)honeyPayVCDidClickAddCard:(HoneyPayHomeViewController *)arg1;
- (void)honeyPayVC:(HoneyPayHomeViewController *)arg1 didClickRecord:(HoneyPayListResp_HoneyPayRecord *)arg2;
@end

