//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;

@protocol ilinkMultiSelectLogicDelegate <MMUIViewControllerDelegate>
- (void)addMembersToIlinkChatRoomGroup:(NSArray *)arg1;
- (NSMutableDictionary *)getMembersInRoom;
- (unsigned long long)getMembersInRoomNum;
- (_Bool)getIfMemberAlreadyInRoom:(NSString *)arg1;
@end

