//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLivePaidConnectMicAnchorSetting, MMFinderLivePaidConnectMicAnchorSettingPanel;

@protocol MMFinderLivePaidConnectMicAnchorSettingPanelDelegate <NSObject>

@optional
- (_Bool)paidConnectMicAnchorSettingPanelCanChangeMicLayoutMode:(MMFinderLivePaidConnectMicAnchorSettingPanel *)arg1;
- (void)paidConnectMicAnchorSettingPanelDidCancel:(MMFinderLivePaidConnectMicAnchorSettingPanel *)arg1;
- (void)paidConnectMicAnchorSettingPanel:(MMFinderLivePaidConnectMicAnchorSettingPanel *)arg1 didConfirmWithLatestSetting:(MMFinderLivePaidConnectMicAnchorSetting *)arg2;
@end

