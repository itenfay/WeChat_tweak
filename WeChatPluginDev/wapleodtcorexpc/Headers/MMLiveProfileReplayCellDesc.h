//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIImageView, MMUILabel, MMUIView;

@interface MMLiveProfileReplayCellDesc
{
    MMUIView *_background;
    MMUIImageView *_iconView;
    MMUILabel *_descLabel;
    MMUILabel *_paidLabel;
    unsigned long long _style;
}

+ (struct CGSize)caculateSize:(unsigned long long)arg1 data:(id)arg2;
+ (id)getDescText:(unsigned long long)arg1 data:(id)arg2;
+ (id)getDescFont:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) MMUILabel *paidLabel; // @synthesize paidLabel=_paidLabel;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) MMUIView *background; // @synthesize background=_background;
- (void)updateWithDataItem:(id)arg1;
- (void)layoutHide;
- (void)layoutWordingAlert;
- (void)layoutLock;
- (void)layoutNormal;
- (void)layoutPaid;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

