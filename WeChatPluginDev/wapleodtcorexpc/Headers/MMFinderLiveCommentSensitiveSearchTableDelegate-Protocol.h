//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveSensitiveDataItem, MMTableView;

@protocol MMFinderLiveCommentSensitiveSearchTableDelegate <NSObject>
- (void)onSearchResultSensitiveDataItemDelete:(MMFinderLiveSensitiveDataItem *)arg1;
- (void)searchTableViewDidScroll:(MMTableView *)arg1;
@end

