//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class HoneyPayPrepareCardViewController, NSString;

@protocol HoneyPayPrepareCardViewControllerDelegate <NSObject>
- (void)prepareCardVC:(HoneyPayPrepareCardViewController *)arg1 didClickNextWithAmount:(NSString *)arg2 wishing:(NSString *)arg3;
@end

