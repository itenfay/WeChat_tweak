//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTImageItemCellViewModel, CAGradientLayer, MMUILabel, NSMutableArray, UIImageView, UIView;

@interface BTImageItemCellView
{
    CAGradientLayer *m_maskLayer;
    UIView *m_maskView;
    NSMutableArray *_webImgViewArr;
    NSMutableArray *_imgBtnArr;
    UIImageView *_imageIcon;
    MMUILabel *_imageNum;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *imageNum; // @synthesize imageNum=_imageNum;
@property(retain, nonatomic) UIImageView *imageIcon; // @synthesize imageIcon=_imageIcon;
@property(retain, nonatomic) NSMutableArray *imgBtnArr; // @synthesize imgBtnArr=_imgBtnArr;
@property(retain, nonatomic) NSMutableArray *webImgViewArr; // @synthesize webImgViewArr=_webImgViewArr;
- (void)initCoverMaskLayer;
- (void)layoutSubviewsNormalItem;
- (void)layoutSubviewsTopItem;
- (void)initNumLabelAndIcon;
- (id)accessibilityLabel;
- (unsigned long long)displayImageViewNum;
- (void)onUpdateViewModel;
- (void)initCoverViews;
- (void)initNormalReaderItem;
- (void)initTopReaderItem;

// Remaining properties
@property(readonly, nonatomic) BTImageItemCellViewModel *viewModel; // @dynamic viewModel;

@end

