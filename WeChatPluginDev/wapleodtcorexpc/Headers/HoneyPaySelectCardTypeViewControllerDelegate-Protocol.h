//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CheckHoneyPayerResp_HPCardTypeInfo, HoneyPaySelectCardTypeViewController;

@protocol HoneyPaySelectCardTypeViewControllerDelegate <NSObject>
- (void)selectCardTypeVC:(HoneyPaySelectCardTypeViewController *)arg1 didSelectCardType:(CheckHoneyPayerResp_HPCardTypeInfo *)arg2;
@end

