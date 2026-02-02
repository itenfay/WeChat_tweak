//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, UIView;

@interface BTMinimizeAnimationView
{
    UIView *_backgroundView;
    UIView *_snapshotCellView;
    CAShapeLayer *_maskLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UIView *snapshotCellView; // @synthesize snapshotCellView=_snapshotCellView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)setSnapshotCellViewAlpha:(double)arg1;
- (void)setMaskLayerAnimationWithStartPath:(id)arg1 endPath:(id)arg2 duration:(double)arg3;
- (void)initSubview;
- (id)initWithFrame:(struct CGRect)arg1 snapshotCellView:(id)arg2;

@end

