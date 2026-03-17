//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class PageScrollView, UIView, WCMediaImageViewModel;

@protocol PageScrollViewDataSource <NSObject>
- (UIView *)pageScrollView:(PageScrollView *)arg1 viewForItem:(unsigned long long)arg2;
- (unsigned long long)numberOfItems:(PageScrollView *)arg1;
- (unsigned long long)currentIndex:(PageScrollView *)arg1;

@optional
- (WCMediaImageViewModel *)imageViewModelForPageScrollView:(PageScrollView *)arg1 atIndex:(unsigned long long)arg2;
@end

