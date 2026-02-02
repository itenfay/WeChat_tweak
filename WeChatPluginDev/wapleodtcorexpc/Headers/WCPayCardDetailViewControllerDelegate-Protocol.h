//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayControlData;

@protocol WCPayCardDetailViewControllerDelegate <NSObject>

@optional
- (void)CardDetailBack;
- (void)CardDetailAddOfflineFunction:(WCPayControlData *)arg1;
- (_Bool)IsNeedShowAddOfflineFunctionButton;
- (void)CardDetailRepay:(WCPayControlData *)arg1;
- (void)CardDetailExpiredUnbindCard:(WCPayControlData *)arg1;
- (void)CardDetailSetMainBankCard:(WCPayControlData *)arg1;
- (void)CardDetailUnbindCard:(WCPayControlData *)arg1;
@end

