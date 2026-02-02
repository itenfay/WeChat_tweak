//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView, WCDataItem;
@protocol ILinkEventExt;

@interface WCSnsCommentDetailRewardView
{
    UIView *_rewardTipView;
    UIView *m_lineView;
    UIView *m_rewardContainer;
    id <ILinkEventExt> m_urlDelegate;
    WCDataItem *_dataItem;
}

+ (id)getNickNameForDataItem:(id)arg1;
+ (double)getCommentViewLeftMarginCurOri;
- (void).cxx_destruct;
- (_Bool)isShowRewardContainer;
- (void)rewardDetailViewTapped;
- (void)initRewardTipView;
- (void)initLineView;
- (void)initRewardContainer;
- (void)initView;
- (void)setDataItem:(id)arg1;
- (id)initWithUrlDelegate:(id)arg1;

@end

