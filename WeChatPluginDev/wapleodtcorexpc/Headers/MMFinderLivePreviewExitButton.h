//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUIImageView, NSString, UITapGestureRecognizer;
@protocol MMFinderLivePreviewExitButtonDelegate;

@interface MMFinderLivePreviewExitButton
{
    id <MMFinderLivePreviewExitButtonDelegate> _delegate;
    MMUIImageView *_imageView;
    MMUIButton *_backgroundButton;
    UITapGestureRecognizer *_gesture;
}

+ (struct CGSize)viewSize;
- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *gesture; // @synthesize gesture=_gesture;
@property(retain, nonatomic) MMUIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) MMUIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <MMFinderLivePreviewExitButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)requestTransfromLiveRoomState;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

