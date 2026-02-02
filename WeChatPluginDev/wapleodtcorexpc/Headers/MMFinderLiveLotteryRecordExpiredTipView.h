//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, MMUIButton, MMUILabel, NSString, UIView;

@interface MMFinderLiveLotteryRecordExpiredTipView
{
    MMUILabel *_titleLabel;
    MMUILabel *_detailLabel;
    MMUIButton *_cancelButton;
    CAShapeLayer *_shapeLayer;
    UIView *_contentView;
    NSString *_detailText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)onCancel;
- (double)contentViewHeight;
- (void)updateSelfViewShapeClip;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)createUI;
- (void)dealloc;
- (void)layoutSubviews;
- (void)updateDetailText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

