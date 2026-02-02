//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFansGroupSignView, UILabel, WCFinderHeadImageView;

@interface MMFinderLiveFansGroupUserInfoTableViewCell
{
    _Bool _smallStyle;
    _Bool _isCurrentRole;
    WCFinderHeadImageView *_headerImageView;
    UILabel *_nameLabel;
    UILabel *_descLabel;
    UILabel *_currentRoleTipLabel;
    MMFinderLiveFansGroupSignView *_fansGroupSignView;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveFansGroupSignView *fansGroupSignView; // @synthesize fansGroupSignView=_fansGroupSignView;
@property(retain, nonatomic) UILabel *currentRoleTipLabel; // @synthesize currentRoleTipLabel=_currentRoleTipLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(nonatomic) _Bool isCurrentRole; // @synthesize isCurrentRole=_isCurrentRole;
@property(nonatomic) _Bool smallStyle; // @synthesize smallStyle=_smallStyle;
- (void)updateStyle;
- (void)configWithName:(id)arg1 desc:(id)arg2 headerUrl:(id)arg3 circleHeader:(_Bool)arg4 fansGroupName:(id)arg5 fansGroupBadge:(id)arg6;
- (void)configWithName:(id)arg1 desc:(id)arg2 headerUrl:(id)arg3 circleHeader:(_Bool)arg4;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

