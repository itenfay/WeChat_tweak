//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMUIView, QBarCodeView;

@interface WCPayOrderDetailBarView
{
    struct CGRect _oldFrame;
    _Bool _inAnimation;
    double _oldBrightness;
    MMUILabel *_barCodeLabel;
    QBarCodeView *_imageBarView;
    MMUIView *_container;
    MMUIView *_maskView;
}

+ (double)barCodeWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) MMUIView *container; // @synthesize container=_container;
@property(retain, nonatomic) QBarCodeView *imageBarView; // @synthesize imageBarView=_imageBarView;
@property(retain, nonatomic) MMUILabel *barCodeLabel; // @synthesize barCodeLabel=_barCodeLabel;
- (_Bool)inFullscreen;
- (void)updateCode:(id)arg1;
- (void)exitFullScreenWithView:(id)arg1 animation:(_Bool)arg2;
- (void)codeViewTapped:(id)arg1;
- (void)commonInit;
- (id)init;

@end

