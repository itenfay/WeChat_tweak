//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BTScrollableFinderCellView, BTScrollableFinderCellViewModel, WCFinderFeedFlowZoomAnimatorHelper, WCFinderMPInterestData;

@protocol BTScrollableFinderCellViewDelegate <NSObject>

@optional
- (void)scrollableFinderCellView:(BTScrollableFinderCellView *)arg1 onLongClickInterestCard:(WCFinderMPInterestData *)arg2 displayIndex:(long long)arg3 dataIndex:(long long)arg4;
- (void)scrollableFinderCellView:(BTScrollableFinderCellView *)arg1 onClickInterestCard:(WCFinderMPInterestData *)arg2 animator:(WCFinderFeedFlowZoomAnimatorHelper *)arg3 displayIndex:(long long)arg4 dataIndex:(long long)arg5;
- (void)scrollableFinderCellViewOnValidShowItems:(_Bool)arg1;
- (void)scrollableFinderCellView:(BTScrollableFinderCellView *)arg1 onExposeItem:(BTScrollableFinderCellViewModel *)arg2 displayIndex:(long long)arg3 dataIndex:(long long)arg4;
- (void)scrollableFinderCellView:(BTScrollableFinderCellView *)arg1 onLongClickCoverArea:(BTScrollableFinderCellViewModel *)arg2 displayIndex:(long long)arg3 dataIndex:(long long)arg4;
- (void)scrollableFinderCellView:(BTScrollableFinderCellView *)arg1 onClickCoverArea:(BTScrollableFinderCellViewModel *)arg2 animator:(WCFinderFeedFlowZoomAnimatorHelper *)arg3 displayIndex:(long long)arg4 dataIndex:(long long)arg5;
- (void)scrollableFinderCellView:(BTScrollableFinderCellView *)arg1 onClickInfoArea:(BTScrollableFinderCellViewModel *)arg2 displayIndex:(long long)arg3 dataIndex:(long long)arg4;
@end

