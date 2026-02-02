//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCEditVideoPushPopTransition;

@interface WCEmoticonCropTimeOnlyViewController
{
    WCEditVideoPushPopTransition *_customTransitionDelegate;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) WCEditVideoPushPopTransition *customTransitionDelegate; // @synthesize customTransitionDelegate=_customTransitionDelegate;
- (void)onCropDone:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)getEditedVideoTimeRange;
- (struct CGSize)getFallbackVideoSize;
- (_Bool)isExceedTimelineTimeLimit;
- (double)getMinDuration;
- (float)getOutputTime;
- (double)getMaxDuration;
- (void)showEditVideoViewOn:(id)arg1;
- (void)viewDidLoad;
- (void)setupTransitioningDelegate;

@end

