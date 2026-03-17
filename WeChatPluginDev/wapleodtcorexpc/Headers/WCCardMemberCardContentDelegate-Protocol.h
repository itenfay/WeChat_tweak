//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCCardBaseCardDetailContentViewDelegate-Protocol.h"

@class NSString, WCCardDynamicCodeGenerator;

@protocol WCCardMemberCardContentDelegate <WCCardBaseCardDetailContentViewDelegate>
- (void)hidePresentNavigation:(_Bool)arg1;
- (void)refreshCode;
- (unsigned int)getOfflineCodeStatus;
- (NSString *)getDynamicCode;
- (NSString *)getOfflineCode;
- (WCCardDynamicCodeGenerator *)getDynamicCodeGenerator;
- (void)onPayButtonDidClick;
- (void)onReasonButtonClick;
- (void)onClickMemberCardAnnounce:(NSString *)arg1;
@end

