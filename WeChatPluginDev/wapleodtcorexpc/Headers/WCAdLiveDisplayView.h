//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMUIView, UIImageView, WCAdRollView, WCDataItem;

@interface WCAdLiveDisplayView
{
    _Bool _isFullCard;
    WCDataItem *_dataItem;
    MMUIView *_liveStatusView;
    UIImageView *_liveStatusIcon;
    MMUILabel *_liveStatusText;
    WCAdRollView *_liveDescView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdRollView *liveDescView; // @synthesize liveDescView=_liveDescView;
@property(retain, nonatomic) MMUILabel *liveStatusText; // @synthesize liveStatusText=_liveStatusText;
@property(retain, nonatomic) UIImageView *liveStatusIcon; // @synthesize liveStatusIcon=_liveStatusIcon;
@property(retain, nonatomic) MMUIView *liveStatusView; // @synthesize liveStatusView=_liveStatusView;
@property(nonatomic) _Bool isFullCard; // @synthesize isFullCard=_isFullCard;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)onViewDisplay:(_Bool)arg1;
- (void)updateLiveStatusViewLayout;
- (void)showLiveStatusViewWithText:(id)arg1 bgColor:(id)arg2;
- (void)updateLiveStatus:(int)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2 isFullCard:(_Bool)arg3;

@end

