//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BizPersonalCenterCellList_CellInfo, MMUILabel, UIImageView, UIView;

@interface BizTLPersonalCenterMainCellView
{
    UIView *_seperateView;
    BizPersonalCenterCellList_CellInfo *_listCellInfo;
    MMUILabel *_nameLabel;
    UIImageView *_arrowIcon;
    UIView *_highlightMaskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highlightMaskView; // @synthesize highlightMaskView=_highlightMaskView;
@property(retain, nonatomic) UIImageView *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) BizPersonalCenterCellList_CellInfo *listCellInfo; // @synthesize listCellInfo=_listCellInfo;
@property(retain, nonatomic) UIView *seperateView; // @synthesize seperateView=_seperateView;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)applyData:(id)arg1;
- (void)layoutSubviews;
- (void)configureLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

