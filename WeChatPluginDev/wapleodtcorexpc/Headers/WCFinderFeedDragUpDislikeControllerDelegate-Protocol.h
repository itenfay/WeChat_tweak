//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderFeedContentVM;

@protocol WCFinderFeedDragUpDislikeControllerDelegate <NSObject>
- (WCFinderFeedContentVM *)finderNotInterestedActionLogicGetContentVMAtPanStart;
- (void)finderNotInterestedActionLogicSetDislikeWithContentVM:(WCFinderFeedContentVM *)arg1;
- (_Bool)finderNotInterestedActionLogicCanShowPanel;

@optional
- (void)finderNotInterestedActionLogicDidShowPanel;
- (void)finderNotInterestedActionLogicWillShowPanel;
@end

