//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderEditVideoProgressInfoView;

@protocol WCFinderEditVideoProgressInfoViewDelegate <NSObject>

@optional
- (void)finderEditVideoProgressInfoViewDidStartDragging;
- (void)finderEditVideoScrollViewDidEndDeceleratingWithProgress:(double)arg1;
- (void)finderEditVideo:(WCFinderEditVideoProgressInfoView *)arg1 didScrollIsDecelerating:(_Bool)arg2;
- (void)finderEditVideoProgressInfoView:(WCFinderEditVideoProgressInfoView *)arg1 didEndDraggingWidhProgress:(double)arg2;
- (void)finderEditVideoProgressInfoView:(WCFinderEditVideoProgressInfoView *)arg1 didClickRow:(unsigned long long)arg2;
- (void)finderEditVideoProgressInfoView:(WCFinderEditVideoProgressInfoView *)arg1 didTriggerSeekWithProgress:(double)arg2;
@end

