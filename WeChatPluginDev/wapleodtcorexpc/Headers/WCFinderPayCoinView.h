//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel;

@interface WCFinderPayCoinView
{
    _Bool _isSelected;
    UILabel *_headerLabel;
    UILabel *_amountLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHeaderLabel:(id)arg1 productPrice:(unsigned int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

