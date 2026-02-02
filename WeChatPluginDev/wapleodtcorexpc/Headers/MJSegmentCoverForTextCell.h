//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, UILabel;

@interface MJSegmentCoverForTextCell
{
    CAShapeLayer *_flagLayer;
    UILabel *_numberLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) CAShapeLayer *flagLayer; // @synthesize flagLayer=_flagLayer;
- (void)updateNumber:(long long)arg1 showFlag:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setupWithSegmentViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)commonInit;

@end

