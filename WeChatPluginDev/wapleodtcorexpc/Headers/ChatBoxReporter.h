//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ChatBoxReporter : NSObject
{
}

+ (void)reportEnterChatBox;
+ (void)reportGroupAction:(long long)arg1 username:(id)arg2 openStatus:(_Bool)arg3;
+ (void)reportGroupAction:(long long)arg1 username:(id)arg2;

@end

