//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditVideoAttr, UIButton, WCFinderEditVideoMultiVideoCropView;

@protocol WCFinderEditVideoMultiVideoCropViewDelegate <NSObject>

@optional
- (void)finderMultiVideoTimeCropView:(WCFinderEditVideoMultiVideoCropView *)arg1 didClickPlayButtonWithPlayState:(_Bool)arg2;
- (void)finderMultiVideoTimeCropView:(WCFinderEditVideoMultiVideoCropView *)arg1 didEndDeceleratingWithProgress:(double)arg2;
- (void)finderMultiVideoTimeCropView:(WCFinderEditVideoMultiVideoCropView *)arg1 didScrollWithProgress:(double)arg2 withIndex:(unsigned long long)arg3;
- (void)finderMultiVideoTimeCropView:(WCFinderEditVideoMultiVideoCropView *)arg1 didEndChangeCropTimeWithAttr:(EditVideoAttr *)arg2 pauseAtTime:(double)arg3 index:(unsigned long long)arg4;
- (void)finderMultiVideoTimeCropView:(WCFinderEditVideoMultiVideoCropView *)arg1 didChangePanSingleVideoAtIndex:(unsigned long long)arg2 progress:(double)arg3 withAttr:(EditVideoAttr *)arg4;
- (void)finderMultiVideoTimeCropView:(WCFinderEditVideoMultiVideoCropView *)arg1 didStartPanSingleVideoAtIndex:(unsigned long long)arg2 withAttr:(EditVideoAttr *)arg3;
- (void)finderMultiVideoTimeCropView:(WCFinderEditVideoMultiVideoCropView *)arg1 didClickCancelButton:(UIButton *)arg2 withAttr:(EditVideoAttr *)arg3;
- (void)finderMultiVideoTimeCropView:(WCFinderEditVideoMultiVideoCropView *)arg1 didClickDoneButton:(UIButton *)arg2 withAttr:(EditVideoAttr *)arg3;
@end

