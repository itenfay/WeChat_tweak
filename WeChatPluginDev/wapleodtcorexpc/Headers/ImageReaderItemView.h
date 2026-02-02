//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, CALayer, MMUILabel, NSString, UIImageView;

@interface ImageReaderItemView
{
    UIImageView *m_imageIcon;
    MMUILabel *m_imageNumLabel;
    CAGradientLayer *m_gradientLayer;
    CALayer *m_coverMaskLayer;
    unsigned int _imageCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int imageCount; // @synthesize imageCount=_imageCount;
- (id)accessibilityLabel;
- (void)onLoadImageOK:(id)arg1;
- (void)normalView;
- (void)topView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

