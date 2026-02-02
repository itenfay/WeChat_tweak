//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EnterpriseSearchDataController, EnterpriseSearchResultItem, MMUIViewController, WCDataSearcher;

@protocol EnterpriseContactSearchViewDelegate <NSObject>
- (EnterpriseSearchDataController *)getDataController;
- (MMUIViewController *)getViewController;
- (WCDataSearcher *)getMMSearchBar;
- (void)onSelectEnterpriseSearchResultItem:(EnterpriseSearchResultItem *)arg1;
- (void)onEnterpriseContactSearchViewReturn:(_Bool)arg1;
@end

