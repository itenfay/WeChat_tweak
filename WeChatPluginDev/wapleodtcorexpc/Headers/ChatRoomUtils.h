//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ChatRoomUtils : NSObject
{
}

+ (id)getJoinChatRoomInviterUserName:(id)arg1;
+ (id)genRichTextJoinChatRoomWord:(id)arg1;
+ (double)getMemListCellHeight:(_Bool)arg1;
+ (_Bool)checkRowHadOpenIMContactWithRow:(unsigned long long)arg1 numCellCol:(unsigned long long)arg2 numCellCnt:(unsigned long long)arg3 arrMemberList:(id)arg4;
+ (void)onAddChatroomMemberTooMuch:(id)arg1 delegate:(id)arg2;
+ (void)onNeedUpgradeChatRoom:(id)arg1 delegate:(id)arg2 tag:(int)arg3;
+ (void)openContactProfile:(id)arg1 ofChatRoomContact:(id)arg2 inViewController:(id)arg3 delegate:(id)arg4 searchScene:(unsigned long long)arg5;
+ (void)openContactProfile:(id)arg1 ofChatRoomContact:(id)arg2 inViewController:(id)arg3 delegate:(id)arg4;
+ (void)openAddContactWithMemberList:(id)arg1 inViewController:(id)arg2 contactsDataScene:(unsigned long long)arg3 delegate:(id)arg4;

@end

