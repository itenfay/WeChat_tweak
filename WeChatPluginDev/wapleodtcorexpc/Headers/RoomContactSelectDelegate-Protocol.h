//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CBaseContact, CContact, ContactMultiSelectCell, MMUIViewController, NSArray, NSIndexPath;

@protocol RoomContactSelectDelegate <NSObject>

@optional
- (void)makeCell:(ContactMultiSelectCell *)arg1 contact:(CContact *)arg2 indexPath:(NSIndexPath *)arg3;
- (_Bool)useCustomMemberList;
- (MMUIViewController *)getViewController;
- (void)didClickDelContact:(CBaseContact *)arg1;
- (void)didReloadMemData;
- (void)makeCell:(ContactMultiSelectCell *)arg1 contact:(CContact *)arg2;
- (void)roomContactSearchBarDidBecomeFirstResponse;
- (void)onCancelSelectContact;
- (void)didMultiSelectContact:(NSArray *)arg1;
- (void)didSelectContact:(CBaseContact *)arg1;
@end

