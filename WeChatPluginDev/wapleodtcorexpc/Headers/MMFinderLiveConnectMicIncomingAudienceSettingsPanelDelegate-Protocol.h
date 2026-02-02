//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveConnectMicIncomingAudienceSettingsPanel;

@protocol MMFinderLiveConnectMicIncomingAudienceSettingsPanelDelegate <NSObject>

@optional
- (void)onConnectMicAudienceSettingsPanelClosed:(MMFinderLiveConnectMicIncomingAudienceSettingsPanel *)arg1;
- (void)onConnectMicAudienceSettingsPanel:(MMFinderLiveConnectMicIncomingAudienceSettingsPanel *)arg1 autoConnectChanged:(_Bool)arg2;
- (void)onConnectMicAudienceSettingsPanel:(MMFinderLiveConnectMicIncomingAudienceSettingsPanel *)arg1 conditionChanged:(unsigned long long)arg2;
@end

