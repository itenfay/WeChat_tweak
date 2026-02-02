//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact;

@protocol OpenIMAddContactRemindDelegate <NSObject>

@optional
- (void)onClickAddContactMakeSure:(CContact *)arg1;
@end

