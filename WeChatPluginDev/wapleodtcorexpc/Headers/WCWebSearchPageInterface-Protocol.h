//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, WCSearchPageState, WCWebSearchBar, WebSearchContext;

@protocol WCWebSearchPageInterface <NSObject>
- (void)configNavBarWith:(NSDictionary *)arg1;
- (void)onSearchInputSetText:(NSString *)arg1 tagInfo:(NSDictionary *)arg2;
- (WCWebSearchBar *)getWebSearchBar;
- (WebSearchContext *)getSearchParams;
- (WCSearchPageState *)getPageState;
@end

