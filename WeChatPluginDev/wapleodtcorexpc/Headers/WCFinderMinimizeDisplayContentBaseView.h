//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, MinimizeAudioTaskExtendCoverView, NSString, UIImage, WCFinderFeedContentVM;
@protocol WCFinderMinimizeContentViewDelegate;

@interface WCFinderMinimizeDisplayContentBaseView : UIView
{
    UIImage *tmpSnapCoverImage;
    WCFinderFeedContentVM *_contentVM;
    id <WCFinderMinimizeContentViewDelegate> _delegate;
    MinimizeAudioTaskExtendCoverView *_coverView;
    MMWebImageView *_fullCoverView;
    NSString *_controlCenterDisplayTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *controlCenterDisplayTitle; // @synthesize controlCenterDisplayTitle=_controlCenterDisplayTitle;
@property(retain, nonatomic) MMWebImageView *fullCoverView; // @synthesize fullCoverView=_fullCoverView;
@property(retain, nonatomic) MinimizeAudioTaskExtendCoverView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) __weak id <WCFinderMinimizeContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) UIImage *tmpSnapCoverImage; // @synthesize tmpSnapCoverImage;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIImage",?,&,N,VtmpSnapCoverImage

- (void)onMinimizeFloatingViewDidDisplay;
- (void)keepHandlePlayer;
- (void)beforeRestore;
- (double)playPosition;
- (id)animatingSnapView;
- (void)resumePlay;
- (void)pausePlay;
- (void)cleanUp;
- (struct CGSize)contentSize;
- (_Bool)showBottomBlur;
- (void)ensureFullDisplayCover;
- (void)ensureDisplayCover;
- (void)updateContentVM:(id)arg1;
- (_Bool)needFullCover;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

