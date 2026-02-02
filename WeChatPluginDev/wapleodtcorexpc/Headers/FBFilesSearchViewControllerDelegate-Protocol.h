//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, UITableView, UITableViewCell, WCFileBrowseInfo;

@protocol FBFilesSearchViewControllerDelegate <NSObject>
- (_Bool)whetherFileBrowseInfoSelect:(WCFileBrowseInfo *)arg1;
- (void)didSearchViewTableSelect:(NSIndexPath *)arg1;
- (UITableViewCell *)cellForIndex:(NSIndexPath *)arg1 ForSearchViewTable:(UITableView *)arg2;
- (void)doSearch:(NSString *)arg1 Pre:(_Bool)arg2;
@end

