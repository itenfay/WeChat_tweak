//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderOpenTimelineParams;
@protocol WCFinderFollowViewControllerDelegate;

@protocol WCFinderFollowViewControllerProtocol <NSObject>
@property(nonatomic) _Bool postFeedInsertMachineTab;
- (unsigned long long)curFollowTabStyle;
- (WCFinderOpenTimelineParams *)openTimelineParams;
- (void)setOpenTimelineParams:(WCFinderOpenTimelineParams *)arg1;
- (unsigned long long)guideBarObjectId;
- (void)setGuideBarObjectId:(unsigned long long)arg1;
- (id <WCFinderFollowViewControllerDelegate>)delegate;
- (void)setDelegate:(id <WCFinderFollowViewControllerDelegate>)arg1;
@end

