//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TingItem, TingSharePlayButton, UIView;

@interface WCListMusicCellViewNew
{
    UIView *m_tailView;
    TingItem *_tingItem;
    TingSharePlayButton *_playButton;
}

+ (id)trimDescWithDataItem:(id)arg1;
+ (id)titleWithDataItem:(id)arg1;
+ (double)calculateHeightWithGroup:(id)arg1 groupItem:(id)arg2 width:(double)arg3 isFirstOneInsection:(_Bool)arg4 isLastOneInSection:(_Bool)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) TingSharePlayButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) TingItem *tingItem; // @synthesize tingItem=_tingItem;
- (void)onClickEvent;
- (void)initView;
- (void)initTailView;
- (double)tailViewHeight;
- (double)maxLabelWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

