//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIButton, WCFinderContact, WCFinderFeedContentVM;

@protocol WCFinderHeadInfoViewDelegate <NSObject>

@optional
- (WCFinderFeedContentVM *)currentContentVM;
- (void)onHeaderFollowClickAction:(UIButton *)arg1;
- (void)onHeaderMoreClickAction:(UIButton *)arg1;
- (void)showSpamTipsWithString:(NSString *)arg1;
- (void)clickNicknameWithContact:(WCFinderContact *)arg1;
- (void)clickAvatar:(NSString *)arg1;
@end

