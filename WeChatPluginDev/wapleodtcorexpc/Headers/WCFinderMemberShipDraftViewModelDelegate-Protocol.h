//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderMemberShipDraftViewModelDelegate <NSObject>

@optional
- (void)finderMemberShipZoneDraftTabInsertItemAtIdx:(long long)arg1;
- (void)finderMemberShipZoneDraftTabDeleteItemAtIdx:(long long)arg1;
- (void)finderMemberShipZoneDraftTabViewFetchListFail;
- (void)finderMemberShipZoneDraftTabViewFetchListSuc;
- (void)finderMemberShipZoneDraftTabViewNoMoreData;
@end

