//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MJSegmentCellBorderView, MJSegmentDurationInfoOverlay, MJSegmentMuteInfoOverlay, MJSegmentViewModel, NSString, UIColor, UIStackView, UIView;
@protocol MJSegmentReusableViewDelegate;

@interface MJSegmentCell : UICollectionViewCell
{
    id <MJSegmentReusableViewDelegate> _delegate;
    MJSegmentViewModel *_viewModel;
    UIColor *_contentBackgroundColor;
    MJSegmentCellBorderView *_borderView;
    UIStackView *_segmentInfoOverlayContainer;
    MJSegmentDurationInfoOverlay *_durationInfoOverlay;
    MJSegmentMuteInfoOverlay *_muteInfoOverlay;
    UIView *_contentBackgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *contentBackgroundView; // @synthesize contentBackgroundView=_contentBackgroundView;
@property(retain, nonatomic) MJSegmentMuteInfoOverlay *muteInfoOverlay; // @synthesize muteInfoOverlay=_muteInfoOverlay;
@property(retain, nonatomic) MJSegmentDurationInfoOverlay *durationInfoOverlay; // @synthesize durationInfoOverlay=_durationInfoOverlay;
@property(retain, nonatomic) UIStackView *segmentInfoOverlayContainer; // @synthesize segmentInfoOverlayContainer=_segmentInfoOverlayContainer;
@property(readonly, nonatomic) MJSegmentCellBorderView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIColor *contentBackgroundColor; // @synthesize contentBackgroundColor=_contentBackgroundColor;
@property(readonly, nonatomic) MJSegmentViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <MJSegmentReusableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hideBorderViewAnimated:(_Bool)arg1;
- (void)showBorderViewAnimated:(_Bool)arg1;
- (void)syncWithMutation;
- (void)syncWithSegmentUIState;
- (void)applyLayoutAttributes:(id)arg1;
- (void)layoutSubviews;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)prepareForReuse;
- (void)setupWithSegmentViewModel:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

