//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NewLifeSearchStreamResult, NewLifeUpdateSearchIconVisibilityReq;

@protocol NewLifeMainTabUIExtension <NSObject>
- (void)onHomePageSearchResultChanged:(NewLifeSearchStreamResult *)arg1;
- (void)shouldUpdateSearchBarIconVisibility:(NewLifeUpdateSearchIconVisibilityReq *)arg1;
- (void)shouldUpdateSearchBarIconVisible:(_Bool)arg1;
@end

