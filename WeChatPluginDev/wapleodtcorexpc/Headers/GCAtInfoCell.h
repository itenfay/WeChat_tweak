//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMHeadImageView, UIImageView, UILabel, UIView;

@interface GCAtInfoCell
{
    UIView *_leftSeperateLineView;
    MMHeadImageView *_headView;
    UILabel *_nickLabel;
    UILabel *_subTitleLabel;
    UIImageView *_selectedImgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *selectedImgView; // @synthesize selectedImgView=_selectedImgView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) MMHeadImageView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UIView *leftSeperateLineView; // @synthesize leftSeperateLineView=_leftSeperateLineView;
- (void)configureWithCellModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

