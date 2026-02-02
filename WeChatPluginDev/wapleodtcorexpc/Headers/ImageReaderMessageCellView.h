//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, ImageReaderMessageViewModel, MMUILabel, NSString, UIImageView;

@interface ImageReaderMessageCellView
{
    UIImageView *m_imageIcon;
    MMUILabel *m_imageNum;
    CAGradientLayer *m_coverMaskLayer;
    CAGradientLayer *m_gradientLayer;
}

- (void).cxx_destruct;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)addCoverMaskLayer;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (void)onLoadImageOK:(id)arg1;
- (void)layoutContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) ImageReaderMessageViewModel *viewModel; // @dynamic viewModel;

@end

