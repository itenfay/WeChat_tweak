//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMBGMCategoryItem, MMBGMCategoryView;

@protocol MMBGMCategoryViewDelegate <NSObject>
- (void)bgmCategoryView:(MMBGMCategoryView *)arg1 didSelectedMusicCategory:(MMBGMCategoryItem *)arg2;
- (void)bgmCategoryViewCollectionViewWillBeginDragging;
- (void)bgmCategoryViewCollectionViewDidScroll;
@end

