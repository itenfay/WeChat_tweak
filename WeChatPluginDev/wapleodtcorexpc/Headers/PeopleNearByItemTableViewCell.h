//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMHeadImageView, UIImageView, UILabel, UIView;

@interface PeopleNearByItemTableViewCell
{
    UILabel *m_nickNameLabel;
    UILabel *m_personalRemarkLabel;
    UILabel *m_remarkContainer;
    UILabel *m_distanceLabel;
    UILabel *m_addedLabel;
    UIImageView *m_genderImageView;
    UIImageView *m_remarkBKImage;
    UIView *m_headerView;
    UIImageView *m_albumFlagView;
    _Bool m_showGenderIcon;
    long long m_iAlbumFlag;
    unsigned int m_certificationFlag;
    int m_sex;
    MMHeadImageView *m_imageView;
    UIImageView *_finderFlagView;
    unsigned long long _finderFlag;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long finderFlag; // @synthesize finderFlag=_finderFlag;
@property(retain, nonatomic) UIImageView *finderFlagView; // @synthesize finderFlagView=_finderFlagView;
@property(nonatomic) _Bool showGenderIcon; // @synthesize showGenderIcon=m_showGenderIcon;
- (void)updateConstraints;
- (void)updateWithLbsContactInfo:(id)arg1 withHeaderView:(id)arg2;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

