//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImageGridView, NSString, UIImageView, UILabel;

@interface WCContentItemViewTemplateNote
{
    MMImageGridView *_imageGridView;
    UIImageView *_defaultImageView;
    UILabel *_titleLabel;
    UIImageView *_originIconView;
    UILabel *_descLabel;
    double _targetMargin;
    double _targetWidth;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
+ (id)getTrimDesc:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double targetWidth; // @synthesize targetWidth=_targetWidth;
@property(nonatomic) double targetMargin; // @synthesize targetMargin=_targetMargin;
- (void)onShareToOpenSDK:(id)arg1;
- (void)onCloseCanvasPageView;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (_Bool)canPeek;
- (void)throwUrlMessage;
- (id)getVoiceOverStrForTimeline;
- (void)onVoiceOverClick;
- (void)setNonInteractive;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)dealloc;
- (void)onClickWCImage:(id)arg1;
- (void)layoutSubviews;
- (void)onLongTouch;
- (void)addFavorite;
- (void)onFavoriteAdd:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)initViewsWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

