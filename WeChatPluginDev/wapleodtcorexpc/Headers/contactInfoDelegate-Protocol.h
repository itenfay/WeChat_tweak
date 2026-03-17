//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, ClickCommandRequestInfo;

@protocol contactInfoDelegate <NSObject>

@optional
- (void)startReceiveMsg:(ClickCommandRequestInfo *)arg1;
- (void)deleteAllMsgByContact:(CContact *)arg1;
- (void)newMessageFromContactInfo:(CContact *)arg1;
- (void)addToContactsFromContactInfo:(CContact *)arg1;
@end

