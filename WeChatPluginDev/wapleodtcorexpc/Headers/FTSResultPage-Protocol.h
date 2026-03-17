//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FTSContext, NSArray, NSString, UITableView, UITextField;

@protocol FTSResultPage <NSObject>
- (void)reloadList;
- (UITextField *)searchTextField;
- (NSString *)searchBarText;

@optional
- (void)onSelectSearchResult;
- (NSString *)latestSearchQuery;
- (FTSContext *)getFTSContext;
- (void)reloadListWithDataUpdate:(NSArray *)arg1;
- (void)resignSearchFirstResponder;
- (UITableView *)resultListView;
@end

