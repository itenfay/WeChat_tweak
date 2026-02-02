//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol WCHomePageDataProviderStarDelegate <NSObject>

@optional
- (void)onStarDataUpdated:(NSArray *)arg1 nextPageMaxID:(unsigned long long)arg2;
@end

