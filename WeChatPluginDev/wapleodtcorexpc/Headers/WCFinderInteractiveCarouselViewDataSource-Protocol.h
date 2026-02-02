//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderJumpInfoPanelView;

@protocol WCFinderInteractiveCarouselViewDataSource <NSObject>
- (WCFinderJumpInfoPanelView *)dataCarouselOnShowPosition:(int)arg1 width:(double)arg2;
- (double)dataCarouselPanelViewMaxWidthOnPosition:(int)arg1;
- (_Bool)dataCarouselIsContentTruncated;
- (long long)dataCarouselCurrentTextLines;
@end

