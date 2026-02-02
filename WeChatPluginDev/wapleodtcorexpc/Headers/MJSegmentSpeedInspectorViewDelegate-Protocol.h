//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJSegmentSpeedInspectorView;

@protocol MJSegmentSpeedInspectorViewDelegate <NSObject>

@optional
- (void)speedInspector:(MJSegmentSpeedInspectorView *)arg1 didSelectRawSpeedRatio:(long long)arg2;
- (void)speedInspector:(MJSegmentSpeedInspectorView *)arg1 willSelectRawSpeedRatio:(long long)arg2;
@end

