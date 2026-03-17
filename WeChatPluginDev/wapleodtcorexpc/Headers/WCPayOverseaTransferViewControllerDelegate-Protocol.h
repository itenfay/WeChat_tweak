//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCPayControlData;

@protocol WCPayOverseaTransferViewControllerDelegate <NSObject>
- (NSString *)WCPayOverseaTransferViewControllerHeadImageUrl;
- (NSString *)WCPayOverseaTransferViewControllerNickName;
- (void)WCPayOverseaTransferViewControllerOnNext:(WCPayControlData *)arg1;
- (void)WCPayOverseaTransferViewControllerCancel;
@end

