//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCCoinConsumePanel;

@protocol WCCoinConsumePanelDelegate <NSObject>
- (void)panelDidClickConsumeTips:(WCCoinConsumePanel *)arg1;
- (void)panelDidClose:(WCCoinConsumePanel *)arg1 isManualTrigger:(_Bool)arg2;
- (void)panelDidClickBalanceButton:(WCCoinConsumePanel *)arg1;
- (void)panelDidClickConsume:(WCCoinConsumePanel *)arg1;
@end

