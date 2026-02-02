//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, ChatRoomInvitationCellQuitRoomInfoView;

@protocol ChatRoomInvitationCellQuitRoomInfoViewDelegate <NSObject>

@optional
- (void)onQuitRoomInfoView:(ChatRoomInvitationCellQuitRoomInfoView *)arg1 tapViewMsgHistoryButton:(CContact *)arg2;
@end

