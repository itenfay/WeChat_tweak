//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayGetProfessionViewController, WCPayProfession;

@protocol WCPayGetProfessionViewControllerDelegate <NSObject>
- (void)getProfessionViewController:(WCPayGetProfessionViewController *)arg1 didSelectedProfession:(WCPayProfession *)arg2;
@end

