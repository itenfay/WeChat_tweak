//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMailContact;

@protocol MailContactFilterViewDelegate <NSObject>

@optional
- (void)contactReturn:(CMailContact *)arg1;
- (void)filterViewBeginDragging;
@end

