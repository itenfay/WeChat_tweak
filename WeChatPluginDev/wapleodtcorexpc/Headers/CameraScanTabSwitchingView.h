//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CameraScanBlurEffectView, UILabel;

@interface CameraScanTabSwitchingView
{
    double _tabViewHeight;
    CameraScanBlurEffectView *_blurView;
    UILabel *_centerLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *centerLabel; // @synthesize centerLabel=_centerLabel;
@property(retain, nonatomic) CameraScanBlurEffectView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) double tabViewHeight; // @synthesize tabViewHeight=_tabViewHeight;
- (struct CGSize)areaSizeAboveTabView;
- (void)setCenterLabelHidden:(_Bool)arg1 hasAnimation:(_Bool)arg2;
- (void)setCenterLabelText:(id)arg1;
- (void)hideSnapshotImageWithCompleteHandler:(CDUnknownBlockType)arg1;
- (void)showSnapshotImageWithAnimation:(id)arg1 blurImage:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;
- (void)setupSubViews;
- (id)init;

@end

