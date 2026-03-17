//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol LoopPageScrollViewDataSourceDelegate <NSObject>

@optional
- (void)didTapPageAtNum:(unsigned int)arg1;
- (void)didChangeToPage:(unsigned int)arg1;
- (int)totalNumOfPage;
- (UIView *)viewForPage:(UIView *)arg1 pageNum:(unsigned int)arg2;
@end

