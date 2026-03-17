//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMFinderNotifyGetMoreLiveEvents <NSObject>

@optional
- (void)onMoreLiveConfigExpiredWithUniqueKey:(NSString *)arg1;
- (void)onMoreLiveConfigReadyWithUniqueKey:(NSString *)arg1;
@end

