//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLivePromoteDisplayLeaseToken;

@protocol MMFinderLivePromoteDisplayLeaseTokenDelegate <NSObject>

@optional
- (void)onPromoteDisplayLeaseInvalidated:(MMFinderLivePromoteDisplayLeaseToken *)arg1 forReason:(unsigned long long)arg2;
- (void)onPromoteDisplayLeaseViewDetaching:(MMFinderLivePromoteDisplayLeaseToken *)arg1;
- (void)onPromoteDisplayLeaseViewAttached:(MMFinderLivePromoteDisplayLeaseToken *)arg1;
@end

