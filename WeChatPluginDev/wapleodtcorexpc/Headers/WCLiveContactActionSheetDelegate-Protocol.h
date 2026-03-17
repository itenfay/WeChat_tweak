//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderContact;

@protocol WCLiveContactActionSheetDelegate <NSObject>

@optional
- (void)actionSheetWillDismiss:(long long)arg1;
- (void)onActionsheetCancelButtonClicked;
- (void)onSwitchToConnectMicAnchorLiveClicked:(WCFinderContact *)arg1;
- (void)onOpenRewardGiftViewButtonClicked:(WCFinderContact *)arg1;
- (void)onOpenStreamProfileButtonClicked:(WCFinderContact *)arg1;
@end

