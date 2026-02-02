//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class QryCancelECardDescRes, WCPayECardDetailViewController;

@protocol WCPayECardDetailViewControllerDelegate <NSObject>
- (void)ecardDetailVC:(WCPayECardDetailViewController *)arg1 didClickCloseWith:(QryCancelECardDescRes *)arg2;
@end

