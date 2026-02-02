//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLivePaidConnectMicAnchorSetting, MicSetting_PurchaseMicSetting;

@protocol MMFinderLiveConnectMicAnchorModeSettingPanelDelegate <NSObject>
- (void)anchorConnectMicModeSettingPanelDidCloseWithSelectedMode:(unsigned long long)arg1 paidMicSetting:(MicSetting_PurchaseMicSetting *)arg2;

@optional
- (_Bool)anchorConnectMicModeSettingPanelCanChangeMicLayoutMode;
- (void)anchorConnectMicModeSettingPanelDidUpdatePaidConnectMicAnchorSetting:(MMFinderLivePaidConnectMicAnchorSetting *)arg1;
@end

