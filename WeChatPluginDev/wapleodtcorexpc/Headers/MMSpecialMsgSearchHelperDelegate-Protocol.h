//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CBaseContact, CMessageWrap, MMSpecialMsgClusterSearchResult, MMSpecialMsgSearchResult, NSArray, NSIndexPath, NSMutableArray, NSString, RouteInfo, UITableView, UITableViewCell;

@protocol MMSpecialMsgSearchHelperDelegate <NSObject>

@optional
- (void)didCustomizationSearchSelectForSpecialMsgReport:(MMSpecialMsgSearchResult *)arg1;
- (void)handleWCPayBrandSearchRouteInfo:(RouteInfo *)arg1;
- (void)didCustomizationSearchSelectForSpecialMsg:(MMSpecialMsgSearchResult *)arg1 searchText:(NSString *)arg2;
- (void)recombineCustomizationArrSearchResult:(NSMutableArray *)arg1 searchText:(NSString *)arg2;
- (void)startCustomizationSearchForSpecialMsg:(NSString *)arg1;
- (UITableViewCell *)getCustomizationCellForSpecialMsgInTableView:(UITableView *)arg1 result:(MMSpecialMsgSearchResult *)arg2 cellIndex:(NSIndexPath *)arg3;
- (void)fillClusterSearcResultCellForSpecialMsg:(UITableViewCell *)arg1 result:(MMSpecialMsgClusterSearchResult *)arg2;
- (void)didClusterSearchSelectForSpecialMsg:(MMSpecialMsgClusterSearchResult *)arg1;
- (_Bool)checkClusterUserNameForSpecialMsg:(NSString *)arg1;
- (void)msgSearchDidDismissForSpecialMsg;
- (void)didSelectSearchResultForMessageWrapForSpecialMsg:(CMessageWrap *)arg1 indexPath:(NSIndexPath *)arg2 arrKeyword:(NSArray *)arg3;
- (CBaseContact *)getChatContactForSpecialMsg;
- (void)msgSearchBarDoSearchForSpecialMsg;
- (void)msgSearchBarCancelForSpecialMsg;
- (void)msgSearchBarActiveForSpecialMsg;
@end

