//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CardHomePageTopCell, MMBadgeView, MMUILabel, UIImageView, UIView, WCPayWebImageView;

@interface WCMktTicketAndCertEntryCell
{
    WCPayWebImageView *_iconImgView;
    MMUILabel *_leftLabel;
    MMUILabel *_rightLabel;
    UIImageView *_rightArrowImgView;
    UIView *_seplineView;
    MMBadgeView *_badgeView;
    UIImageView *_redDotImageView;
    UIView *_highlightView;
    CardHomePageTopCell *_topCellData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CardHomePageTopCell *topCellData; // @synthesize topCellData=_topCellData;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) UIImageView *redDotImageView; // @synthesize redDotImageView=_redDotImageView;
@property(retain, nonatomic) MMBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIView *seplineView; // @synthesize seplineView=_seplineView;
@property(retain, nonatomic) UIImageView *rightArrowImgView; // @synthesize rightArrowImgView=_rightArrowImgView;
@property(retain, nonatomic) MMUILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) MMUILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) WCPayWebImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
- (void)updateContentWithData:(id)arg1 hasSepline:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

