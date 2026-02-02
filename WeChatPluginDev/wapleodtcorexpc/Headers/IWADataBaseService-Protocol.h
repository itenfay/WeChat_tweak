//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IWADataBaseService <NSObject>
+ (NSString *)notificationWithTag:(long long)arg1;
+ (long long)tagForLocation;
+ (long long)tagForWeAppTask;
+ (long long)tagForWeApp;
@end

