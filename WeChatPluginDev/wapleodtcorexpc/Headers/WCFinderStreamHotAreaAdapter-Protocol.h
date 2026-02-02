//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath, UIScrollView, UIView;

@protocol WCFinderStreamHotAreaAdapter <NSObject>
- (NSIndexPath *)indexPathForCell:(UIView *)arg1;
- (NSArray *)listVisiableCells;
- (void)setView:(UIScrollView *)arg1;
- (UIScrollView *)view;
@end

