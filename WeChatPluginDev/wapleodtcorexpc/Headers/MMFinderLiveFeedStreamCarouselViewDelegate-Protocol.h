//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderWindowProductInfo, MMFinderLiveFeedStreamProductStyleView;

@protocol MMFinderLiveFeedStreamCarouselViewDelegate <NSObject>

@optional
- (void)onFeedStreamCarouselViewHeightUpdated;
- (void)onFeedStreamCarouselViewProductStyleClicked:(MMFinderLiveFeedStreamProductStyleView *)arg1 jump2Type:(unsigned long long)arg2 productInfo:(FinderWindowProductInfo *)arg3;
@end

