//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, WAOverallAuthListCgi, WCBaseNetworkingError;

@protocol WAOverallAuthListCgiDelegate <NSObject>
- (void)getOverallAuthListCgi:(WAOverallAuthListCgi *)arg1 didFailWithError:(WCBaseNetworkingError *)arg2;
- (void)getOverallAuthListCgi:(WAOverallAuthListCgi *)arg1 didGetAuthItemList:(NSArray *)arg2 hasNoMore:(_Bool)arg3 allNeedShowScopeList:(NSArray *)arg4;
@end

