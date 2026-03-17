//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIScrollView;

@protocol MMLoadMoreCollectionViewDelegate <NSObject>
- (void)scrollViewWillBeginDecelerating:(UIScrollView *)arg1;
- (void)onLoadDone;
- (void)onLoadMore;
@end

