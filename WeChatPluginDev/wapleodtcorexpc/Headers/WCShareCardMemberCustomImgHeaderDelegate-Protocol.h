//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCShareCardBaseCardHeaderDelegate-Protocol.h"

@class NSString, WCCardFieldItem;

@protocol WCShareCardMemberCustomImgHeaderDelegate <WCShareCardBaseCardHeaderDelegate>

@optional
- (void)onMemberCustomImgHeaderInfoBtnClicked;
- (void)onMemberCardSecondaryField:(WCCardFieldItem *)arg1;
- (void)onMemberCardAnnounceClicked:(NSString *)arg1;
- (void)onMemberCardViewApplyBtnClick;
@end

