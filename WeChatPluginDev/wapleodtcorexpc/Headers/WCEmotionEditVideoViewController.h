//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, NSString, UIButton, WCEditVideoPushPopTransition;

@interface WCEmotionEditVideoViewController
{
    WCEditVideoPushPopTransition *_customTransitionDelegate;
    MMWebImageView *_thumbWebImgView;
    UIButton *_cancelDonwloadBtn;
    UIButton *_fakeNextBtn;
    NSString *_thumbImgUrl;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) NSString *thumbImgUrl; // @synthesize thumbImgUrl=_thumbImgUrl;
@property(retain, nonatomic) UIButton *fakeNextBtn; // @synthesize fakeNextBtn=_fakeNextBtn;
@property(retain, nonatomic) UIButton *cancelDonwloadBtn; // @synthesize cancelDonwloadBtn=_cancelDonwloadBtn;
@property(retain, nonatomic) MMWebImageView *thumbWebImgView; // @synthesize thumbWebImgView=_thumbWebImgView;
@property(retain, nonatomic) WCEditVideoPushPopTransition *customTransitionDelegate; // @synthesize customTransitionDelegate=_customTransitionDelegate;
- (struct CGSize)getFallbackVideoSize;
- (_Bool)isExceedTimelineTimeLimit;
- (float)getOutputTime;
- (void)setupTransitioningDelegate;
- (double)getMinDuration;
- (double)getMaxDuration;
- (void)showEditVideoViewOn:(id)arg1;
- (void)onTapCancel;
- (void)bringBtnsToFront;
- (void)viewDidLoad;
- (void)updateWithVideoPath:(id)arg1;
- (id)initWithThumbImgUrl:(id)arg1;

@end

