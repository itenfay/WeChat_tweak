//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSString, NewChatRoomMemberItemView;

@protocol NewChatRoomMemberItemViewDelegate <NSObject>

@optional
- (void)onLongPressEx:(NewChatRoomMemberItemView *)arg1;
- (void)setShowRemoveMember;
- (void)onDeleteMember:(NSString *)arg1;
- (void)onAddMember:(id)arg1;
- (void)openContactInfo:(CContact *)arg1;
@end

