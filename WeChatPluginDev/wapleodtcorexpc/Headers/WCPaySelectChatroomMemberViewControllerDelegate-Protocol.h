//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSString;

@protocol WCPaySelectChatroomMemberViewControllerDelegate <NSObject>
- (void)onSelectedContact:(CContact *)arg1;
- (void)willSelectContact:(CContact *)arg1;
- (CContact *)getChatroomContact;
- (void)onSelectMemberViewControllerBack;
- (NSString *)getViewControllerTitle;

@optional
- (NSString *)getSameNicknameTips;
@end

