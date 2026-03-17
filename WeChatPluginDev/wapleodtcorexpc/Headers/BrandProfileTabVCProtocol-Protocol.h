//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIGestureRecognizer, UIScrollView, UIViewController;

@protocol BrandProfileTabVCProtocol <NSObject>
- (unsigned long long)tabType;
- (UIViewController *)viewController;
- (void)setExternalGestureRecognizer:(UIGestureRecognizer *)arg1;
- (NSString *)tabTitle;
- (void)updateSectionWidthInSectionDataList;
- (void)setContentOffset:(struct CGPoint)arg1;

@optional
- (void)brandScrollViewDidScroll:(UIScrollView *)arg1;
@end

