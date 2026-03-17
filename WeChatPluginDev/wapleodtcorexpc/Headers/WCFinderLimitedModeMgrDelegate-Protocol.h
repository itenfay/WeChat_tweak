//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderLimitedModeMgrDelegate <NSObject>

@optional
- (void)syncAntiSceneTotalWatchSecondsToLocal:(unsigned long long)arg1;
- (void)syncLastLiftCurfewTimeStamp:(unsigned long long)arg1;
- (void)syncLimitPassSecondsToLocal:(unsigned long long)arg1;
@end

