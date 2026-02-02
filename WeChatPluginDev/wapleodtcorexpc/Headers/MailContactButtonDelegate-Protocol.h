//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMailContact, UIView;

@protocol MailContactButtonDelegate <NSObject>

@optional
- (void)onMailContactClicked:(CMailContact *)arg1 sender:(UIView *)arg2;
- (void)onMailContactDoubleClicked:(CMailContact *)arg1;
@end

