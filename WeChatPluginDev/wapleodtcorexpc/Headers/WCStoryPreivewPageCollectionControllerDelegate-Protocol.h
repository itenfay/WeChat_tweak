//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, WCStoryPreivewPageCollectionController, WCStoryPreviewPageView;

@protocol WCStoryPreivewPageCollectionControllerDelegate <NSObject>

@optional
- (_Bool)bPreventPlayVideo;
- (void)onStoryPageCollectionControllerChangePage:(WCStoryPreivewPageCollectionController *)arg1 pageView:(WCStoryPreviewPageView *)arg2 lastIndexPath:(NSIndexPath *)arg3;
@end

