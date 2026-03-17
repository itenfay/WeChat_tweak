//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BTFixedFinderCellView, BTFixedFinderCellViewModel;

@protocol BTFixedFinderCellViewDelegate <NSObject>

@optional
- (void)fixedFinderCellView:(BTFixedFinderCellView *)arg1 onClickFeedbackBtn:(BTFixedFinderCellViewModel *)arg2 index:(long long)arg3;
- (void)fixedFinderCellView:(BTFixedFinderCellView *)arg1 onLongClickCoverArea:(BTFixedFinderCellViewModel *)arg2 index:(long long)arg3;
- (void)fixedFinderCellView:(BTFixedFinderCellView *)arg1 onLongClickInfoArea:(BTFixedFinderCellViewModel *)arg2 index:(long long)arg3;
- (void)fixedFinderCellView:(BTFixedFinderCellView *)arg1 onClickCoverArea:(BTFixedFinderCellViewModel *)arg2 index:(long long)arg3;
- (void)fixedFinderCellView:(BTFixedFinderCellView *)arg1 onClickInfoArea:(BTFixedFinderCellViewModel *)arg2 index:(long long)arg3;
@end

