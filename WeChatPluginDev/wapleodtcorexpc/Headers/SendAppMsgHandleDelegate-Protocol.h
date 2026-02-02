//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol SendAppMsgHandleDelegate <NSObject>

@optional
- (void)OnStayAtWechatWithSendAppMsgHandle;
- (void)OnSendAppMsgOKToContacts:(NSArray *)arg1;
@end

