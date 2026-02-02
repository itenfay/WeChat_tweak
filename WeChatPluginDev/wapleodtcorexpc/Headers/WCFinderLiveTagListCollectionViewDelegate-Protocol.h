//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderLiveTagListCollectionView, WCFinderLiveTagListItem;

@protocol WCFinderLiveTagListCollectionViewDelegate <NSObject>

@optional
- (_Bool)canTagListViewUnToggle:(WCFinderLiveTagListCollectionView *)arg1 unToggleItem:(WCFinderLiveTagListItem *)arg2 toggleItem:(WCFinderLiveTagListItem *)arg3;
- (void)onTagListView:(WCFinderLiveTagListCollectionView *)arg1 didSelectedItem:(WCFinderLiveTagListItem *)arg2 isToggle:(_Bool)arg3;
@end

