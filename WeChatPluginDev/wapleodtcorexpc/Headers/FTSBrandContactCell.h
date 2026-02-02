//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AttributeLabel, CContact, MMBrandHeadImageView, NSArray, NSString, SearchMatchTip, UIView, WCTagsView;

@interface FTSBrandContactCell
{
    _Bool _bHideCerIcon;
    _Bool _bAsTopHit;
    _Bool _bShouldHighlight;
    NSString *_searchText;
    CContact *_contact;
    AttributeLabel *_displayNameLabel;
    AttributeLabel *_detailLabel;
    double _cellHeight;
    SearchMatchTip *_matchTip;
    NSArray *_arrKeyword;
    MMBrandHeadImageView *_brandHeadImageView;
    UIView *_lineView;
    WCTagsView *_tagsView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTagsView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) _Bool bShouldHighlight; // @synthesize bShouldHighlight=_bShouldHighlight;
@property(nonatomic) _Bool bAsTopHit; // @synthesize bAsTopHit=_bAsTopHit;
@property(retain, nonatomic) MMBrandHeadImageView *brandHeadImageView; // @synthesize brandHeadImageView=_brandHeadImageView;
@property(retain, nonatomic) NSArray *arrKeyword; // @synthesize arrKeyword=_arrKeyword;
@property(retain, nonatomic) SearchMatchTip *matchTip; // @synthesize matchTip=_matchTip;
@property(nonatomic) _Bool bHideCerIcon; // @synthesize bHideCerIcon=_bHideCerIcon;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) AttributeLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) AttributeLabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void)accessibilityElementDidBecomeFocused;
- (void)layoutSubviews;
- (id)getTopHitDescrpition;
- (void)updateStatus;
- (void)updateContact:(id)arg1 matchTip:(id)arg2 searchText:(id)arg3 keywords:(id)arg4 asTopHit:(_Bool)arg5;
- (void)updateContact:(id)arg1;
- (void)setContextMenuEnabled:(_Bool)arg1;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

