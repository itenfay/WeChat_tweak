//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "UICollectionViewDelegate-Protocol.h"

@class TextStateHistoryCalendarCollectionView;

@protocol TextStateHistoryCalendarCollectionViewDelegate <UICollectionViewDelegate>

@optional
- (void)collectionViewDidSelectStoryEntry:(TextStateHistoryCalendarCollectionView *)arg1;
- (void)collectionView:(TextStateHistoryCalendarCollectionView *)arg1 didSelectSectionAtIndex:(unsigned long long)arg2;
@end

