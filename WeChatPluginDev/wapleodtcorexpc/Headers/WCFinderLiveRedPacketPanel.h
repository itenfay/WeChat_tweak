//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView, WCFinderLiveRedPacketItemView;

@interface WCFinderLiveRedPacketPanel
{
    WCFinderLiveRedPacketItemView *_redPacketItemView;
    WCFinderLiveRedPacketItemView *_lotteryItemView;
    CDUnknownBlockType _liveRedPacketPanelBlock;
    UIView *_contentView;
    UIView *_headView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType liveRedPacketPanelBlock; // @synthesize liveRedPacketPanelBlock=_liveRedPacketPanelBlock;
@property(retain, nonatomic) WCFinderLiveRedPacketItemView *lotteryItemView; // @synthesize lotteryItemView=_lotteryItemView;
@property(retain, nonatomic) WCFinderLiveRedPacketItemView *redPacketItemView; // @synthesize redPacketItemView=_redPacketItemView;
- (double)contentViewHeight;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)createUI;
- (void)redPacketClick;
- (void)lotteryClick;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

