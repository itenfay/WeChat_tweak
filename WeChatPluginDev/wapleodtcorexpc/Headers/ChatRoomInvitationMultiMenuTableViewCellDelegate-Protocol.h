//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, ChatRoomInvitationWrap, NSString;

@protocol ChatRoomInvitationMultiMenuTableViewCellDelegate <NSObject>

@optional
- (void)onOpenContactProfile:(CContact *)arg1 invitationWrap:(ChatRoomInvitationWrap *)arg2;
- (void)onOpenMsgHistoryOfContact:(NSString *)arg1;
- (void)onTapApproveForChatRoomInvitation:(ChatRoomInvitationWrap *)arg1;
@end

