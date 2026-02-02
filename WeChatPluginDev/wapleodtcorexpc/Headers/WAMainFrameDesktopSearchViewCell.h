//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class WAMainFrameTaskBarSearchBar;

@interface WAMainFrameDesktopSearchViewCell : UICollectionViewCell
{
    WAMainFrameTaskBarSearchBar *_searchBar;
}

+ (double)contentHeight;
- (void).cxx_destruct;
- (void)onSearchPlaceHolderUpdate:(id)arg1;
- (void)refreshSearchPlaceHolder:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

