//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIImageView, MMUILabel;

@interface WeAppGameJoinTeamSectionView
{
    MMUIImageView *_leftIconView;
    MMUILabel *_wordingLable;
    MMUILabel *_conditionLable;
    MMUIImageView *_rightIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIImageView *rightIconView; // @synthesize rightIconView=_rightIconView;
@property(retain, nonatomic) MMUILabel *conditionLable; // @synthesize conditionLable=_conditionLable;
@property(retain, nonatomic) MMUILabel *wordingLable; // @synthesize wordingLable=_wordingLable;
@property(retain, nonatomic) MMUIImageView *leftIconView; // @synthesize leftIconView=_leftIconView;
- (void)updateDesc:(id)arg1;
- (void)layoutUI;
- (void)initUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

