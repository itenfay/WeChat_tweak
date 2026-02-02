//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, UIScrollView;

@protocol ZZFlexibleLayoutViewProtocol <NSObject>

@optional
+ (double)viewHeightByDataModel:(id)arg1 hostView:(UIScrollView *)arg2;
+ (double)viewHeightByDataModel:(id)arg1;
+ (struct CGSize)viewSizeByDataModel:(id)arg1 hostView:(UIScrollView *)arg2;
+ (struct CGSize)viewSizeByDataModel:(id)arg1;
- (void)onViewPositionUpdatedWithIndexPath:(NSIndexPath *)arg1 sectionItemCount:(long long)arg2;
- (void)setViewEventAction:(id (^)(long long, id))arg1;
- (void)setViewDelegate:(id)arg1;
- (void)setViewDataModel:(id)arg1;
@end

