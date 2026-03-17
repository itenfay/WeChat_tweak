//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJTimelineView;

@protocol MJTimelineViewDelegate <NSObject>
- (void)timelineView:(MJTimelineView *)arg1 didUpdateBounds:(struct CGRect)arg2 toBounds:(struct CGRect)arg3 contentSize:(struct CGSize)arg4 toContentSize:(struct CGSize)arg5;
@end

