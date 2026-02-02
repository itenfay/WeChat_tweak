//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UICollectionReusableView;
@protocol MJSegmentReusableView;

@protocol MJSegmentReusableViewDelegate <NSObject>

@optional
- (void)segmentReusableViewDidTouchUpInside:(UICollectionReusableView<MJSegmentReusableView> *)arg1;
@end

