//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCPLabel, MMHeadImageView, MMUILabel, NSString;

@interface GameCenterMsgListBaseCell
{
    MMHeadImageView *_headView;
    MMCPLabel *_nickView;
    MMUILabel *_timeView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *timeView; // @synthesize timeView=_timeView;
@property(retain, nonatomic) MMCPLabel *nickView; // @synthesize nickView=_nickView;
@property(retain, nonatomic) MMHeadImageView *headView; // @synthesize headView=_headView;
- (void)layoutSubviews;
- (void)onClickNickView;
- (void)onClickHeadView;
- (void)updateWithCellData:(id)arg1;
- (void)setupGameCenterMsgListBaseCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

