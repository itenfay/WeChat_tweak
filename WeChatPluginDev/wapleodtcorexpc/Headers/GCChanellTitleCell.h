//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel;

@interface GCChanellTitleCell
{
    UILabel *_titleLabel;
    UILabel *_numberLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setSelected:(_Bool)arg1;
- (void)configureWithCellModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

