//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMFinderLiveConnectMicPkPanelMasterViewDelegate-Protocol.h"

@protocol MMFinderLiveConnectMicPkPanelDelegate <MMFinderLiveConnectMicPkPanelMasterViewDelegate>

@optional
- (void)onConnectMicPkPanelWillClose;
- (void)onConnectMicPkPanelFinishPkPrematurely;
- (void)onConnectMicPkPanelQuitPk;
@end

