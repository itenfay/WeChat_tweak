//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AttributeLabel, CContact, MMBrandHeadImageView, MMHeadImageView, MMImageView, MMUILabel, SearchMatchTip, TextStateItemView, UIImage, UIImageView, WCTagsView;

@interface FTSContactCell
{
    CContact *_contact;
    SearchMatchTip *_matchTip;
    MMBrandHeadImageView *_brandHeadImageView;
    MMHeadImageView *_headImageView;
    MMImageView *_iconNamePostfix;
    MMUILabel *_labelNamePostfix;
    AttributeLabel *_displayNameLabel;
    AttributeLabel *_detailLabel;
    MMUILabel *_appTypeLabel;
    _Bool _bAsTopHit;
    WCTagsView *_tagsView;
    UIImageView *_maskView;
    UIImage *m_defaultOpenimGroupIcon;
    _Bool _bIsDisplayCenter;
    double _preferHeadImageLen;
    TextStateItemView *_textStateView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TextStateItemView *textStateView; // @synthesize textStateView=_textStateView;
@property(nonatomic) _Bool bIsDisplayCenter; // @synthesize bIsDisplayCenter=_bIsDisplayCenter;
@property(nonatomic) double preferHeadImageLen; // @synthesize preferHeadImageLen=_preferHeadImageLen;
@property(readonly, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void)layoutSubviews;
- (void)updateContact:(id)arg1 matchTip:(id)arg2 asTopHit:(_Bool)arg3;
- (void)updateContact:(id)arg1 matchTip:(id)arg2;
- (void)updateIconNamePostfix;
- (void)updateStatus:(_Bool)arg1;
- (id)getTopHitDescrpition;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

