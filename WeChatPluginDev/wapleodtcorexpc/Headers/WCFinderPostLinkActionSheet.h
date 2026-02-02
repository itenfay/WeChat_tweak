//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;
@protocol WCFinderPostLinkActionSheetDelegate;

@interface WCFinderPostLinkActionSheet
{
    int _commentScene;
    id <WCFinderPostLinkActionSheetDelegate> _m_delegate;
    long long _linkFlag;
    UIView *_tipsView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) long long linkFlag; // @synthesize linkFlag=_linkFlag;
@property(nonatomic) __weak id <WCFinderPostLinkActionSheetDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onClickTingAudioAction;
- (void)onClickTingMusicAction;
- (void)onClickMembershipAction;
- (void)onClickShopAction;
- (void)onClickStickerAction;
- (void)onClickTxspAction;
- (void)onClickRedEnvelopeAction;
- (void)onClickWxArticleAction;
- (void)onClickCloseBtn;
- (void)bindReportViewFrom:(id)arg1 eid:(id)arg2;
- (id)getTipsActionSheetView;
- (double)getCustomView:(double)arg1;
- (double)heightOfWholeSheet;

@end

