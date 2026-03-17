//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, MMSessionInfo, NSString;

@protocol IMMNewSessionMgrFilterExt <NSObject>
- (MMSessionInfo *)isUserHasSpecalSessionInfo:(NSString *)arg1;
- (_Bool)isMessageShouldHandled:(CMessageWrap *)arg1;
- (_Bool)isUserShouldHandled:(NSString *)arg1;
@end

