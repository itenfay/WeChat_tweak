//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLivePromoteListBaseViewItem;

@protocol MMFinderLivePromoteListViewModelDelegate <NSObject>
- (void)addButtonClicked:(unsigned int)arg1;
- (void)onLivePromoteListOperation:(long long)arg1 item:(MMFinderLivePromoteListBaseViewItem *)arg2;
@end

