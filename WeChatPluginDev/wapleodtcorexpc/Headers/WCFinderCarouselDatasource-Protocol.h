//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, UICollectionViewCell, WCFinderCarouselView;

@protocol WCFinderCarouselDatasource <NSObject>
- (UICollectionViewCell *)viewForCarousel:(WCFinderCarouselView *)arg1 indexPath:(NSIndexPath *)arg2 index:(long long)arg3;
- (long long)numbersForCarousel:(WCFinderCarouselView *)arg1;
@end

