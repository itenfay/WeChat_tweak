//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSString;

@protocol OpenProfileLogicHelperDelegate <NSObject>
- (void)onOpenProfile:(int)arg1 WithErrMsg:(NSString *)arg2 WithContact:(CContact *)arg3 Ticket:(NSString *)arg4;
@end

