//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@protocol ilinkMultiSelectContactsViewControllerDelegate <MMUIViewControllerDelegate>
- (NSMutableDictionary *)getMembersHasSelectBefore;
- (void)onMultiSelectContactOutsideRoomReturn:(NSArray *)arg1 removeContacts:(NSMutableArray *)arg2;
- (NSMutableDictionary *)getMembersInRoom;
- (unsigned long long)getMembersLimitNum;
@end

