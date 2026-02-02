//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CardSortInfo, MMUILabel, UIButton, UIImageView, UIView;
@protocol WCMktStoreSectionCellDelegate;

@interface WCMktStoreSectionCell
{
    id <WCMktStoreSectionCellDelegate> _delegate;
    UIImageView *_iconImgView;
    MMUILabel *_leftLabel;
    MMUILabel *_rightLabel;
    UIImageView *_rightArrowImgView;
    UIView *_seplineView;
    UIButton *_coverBtn;
    CardSortInfo *_sortInfo;
}

- (void).cxx_destruct;
@property(nonatomic) CardSortInfo *sortInfo; // @synthesize sortInfo=_sortInfo;
@property(retain, nonatomic) UIButton *coverBtn; // @synthesize coverBtn=_coverBtn;
@property(retain, nonatomic) UIView *seplineView; // @synthesize seplineView=_seplineView;
@property(retain, nonatomic) UIImageView *rightArrowImgView; // @synthesize rightArrowImgView=_rightArrowImgView;
@property(retain, nonatomic) MMUILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) MMUILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(nonatomic) __weak id <WCMktStoreSectionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sortRuleCoverBtnClick;
- (void)updateCellContentWithSortInfo:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

