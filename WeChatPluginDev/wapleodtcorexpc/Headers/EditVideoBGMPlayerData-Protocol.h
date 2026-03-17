//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol EditVideoBGMPlayerData <NSObject>
- (NSString *)description;
- (NSString *)musicUrl;

@optional
- (unsigned long long)songDurationInMs;
- (unsigned long long)musicStartTimeInMs;
@end

