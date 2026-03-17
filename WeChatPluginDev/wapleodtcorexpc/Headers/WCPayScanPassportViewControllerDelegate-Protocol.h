//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, WCPayScanPassportViewController;

@protocol WCPayScanPassportViewControllerDelegate <NSObject>
- (void)WCPayScanPassportViewControllerFail:(WCPayScanPassportViewController *)arg1;
- (void)WCPayScanPassportViewControllerCancel:(WCPayScanPassportViewController *)arg1;
- (void)WCPayScanPassportViewController:(WCPayScanPassportViewController *)arg1 DidDetectImageArr:(NSArray *)arg2;
@end

