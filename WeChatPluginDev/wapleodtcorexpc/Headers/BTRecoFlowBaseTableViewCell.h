//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTRecoFlowSectionData, GetRecommendFeedsResp_RecommendCardMsg, GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg, UIView;
@protocol BTRecoFlowBaseTableViewCellDelegate;

@interface BTRecoFlowBaseTableViewCell
{
    _Bool _shouldShowBottomSeperateLine;
    id <BTRecoFlowBaseTableViewCellDelegate> _delegate;
    GetRecommendFeedsResp_RecommendCardMsg *_card;
    GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg *_msg;
    long long _cardPos;
    BTRecoFlowSectionData *_sectionData;
    UIView *_highlightMaskView;
}

+ (id)cellReuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highlightMaskView; // @synthesize highlightMaskView=_highlightMaskView;
@property(retain, nonatomic) BTRecoFlowSectionData *sectionData; // @synthesize sectionData=_sectionData;
@property(nonatomic) _Bool shouldShowBottomSeperateLine; // @synthesize shouldShowBottomSeperateLine=_shouldShowBottomSeperateLine;
@property(nonatomic) long long cardPos; // @synthesize cardPos=_cardPos;
@property(retain, nonatomic) GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) GetRecommendFeedsResp_RecommendCardMsg *card; // @synthesize card=_card;
@property(nonatomic) __weak id <BTRecoFlowBaseTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)onDisappear;
- (void)onAppear;
@property(readonly, nonatomic) unsigned int itemIndex;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

