//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, UITableViewCell;

@protocol WCContactSelectFixedSearcherDelegate <NSObject>
- (void)liveContactDidSearchViewTableSelect:(NSIndexPath *)arg1;
- (UITableViewCell *)liveContactCellForSearchViewTable:(UITableViewCell *)arg1 index:(NSIndexPath *)arg2;
- (void)liveContactCancelSearch;
- (void)liveContactDoSearch:(NSString *)arg1 Pre:(_Bool)arg2;
- (void)liveContactBeginSearch;
@end

