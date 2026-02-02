//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, MMUIViewController, NSString, NewChatRoomMemberItemView;

@protocol ChatRoomMemberGridViewDelegate <NSObject>

@optional
- (MMUIViewController *)getViewController;
- (void)onLongPressEx:(NewChatRoomMemberItemView *)arg1;
- (void)showMoreMember;
- (void)setShowRemoveMember;
- (void)onDeleteMember:(NSString *)arg1;
- (void)addMember;
- (void)openContactInfo:(CContact *)arg1;
@end

