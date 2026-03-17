//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKViewLayout-Protocol.h"

@class MMKHorizontalScrollViewOnScrollCallback, MMKPoint;
@protocol MMKView;

@protocol MMKHorizontalScrollView <MMKViewLayout>
- (void)setOnScrollCallback:(MMKHorizontalScrollViewOnScrollCallback *)arg1;
- (_Bool)getScrollWhenViewSizeEnough;
- (void)setScrollWhenViewSizeEnough:(_Bool)arg1;
- (_Bool)getShowScrollBar;
- (void)setShowScrollBar:(_Bool)arg1;
- (void)setContentOffset:(MMKPoint *)arg1 animated:(_Bool)arg2;
- (void)setContentOffset:(MMKPoint *)arg1;
- (MMKPoint *)getContentOffset;
- (void)setContentInsect:(float)arg1 left:(float)arg2 bottom:(float)arg3 right:(float)arg4;
- (void)setContent:(id <MMKView>)arg1;
- (void)scrollTo:(id <MMKView>)arg1 xOffset:(float)arg2 yOffset:(float)arg3 animated:(_Bool)arg4;
@end

