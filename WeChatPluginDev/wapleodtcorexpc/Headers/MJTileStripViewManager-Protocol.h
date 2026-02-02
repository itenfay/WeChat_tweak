//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJTileStripView, MJVisualClipSegmentViewModel;

@protocol MJTileStripViewManager <NSObject>
- (void)enqueueTileStripView:(MJTileStripView *)arg1 forSegmentVM:(MJVisualClipSegmentViewModel *)arg2;
- (MJTileStripView *)dequeueTileStripViewForSegmentVM:(MJVisualClipSegmentViewModel *)arg1;
@end

