//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class WCImageFullScreenTagViewModel, WCLivePhotoButton;
@protocol WCImageFullScreenTagViewDelegate;

@interface WCImageFullScreenTagView : UIView
{
    WCImageFullScreenTagViewModel *_viewModel;
    id <WCImageFullScreenTagViewDelegate> _delegate;
    WCLivePhotoButton *_livePhotoButton;
    struct UIEdgeInsets _tagSafeArea;
    struct UIEdgeInsets _tagPadding;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCLivePhotoButton *livePhotoButton; // @synthesize livePhotoButton=_livePhotoButton;
@property(nonatomic) struct UIEdgeInsets tagPadding; // @synthesize tagPadding=_tagPadding;
@property(nonatomic) struct UIEdgeInsets tagSafeArea; // @synthesize tagSafeArea=_tagSafeArea;
@property(nonatomic) __weak id <WCImageFullScreenTagViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WCImageFullScreenTagViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)livePhotoButtonClicked:(id)arg1;
- (void)loadLivePhotoButton;
- (id)initWithViewModel:(id)arg1 frame:(struct CGRect)arg2;

@end

