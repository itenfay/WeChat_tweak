//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMUIView, UILabel, WCPayC2CFestivalMsgViewModel;

@interface WCPayC2CFestivalMsgCellView
{
    UILabel *m_descLabel;
    UILabel *m_titleLabel;
    MMUILabel *_bottomLabel;
    MMUIView *_audioView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *audioView; // @synthesize audioView=_audioView;
@property(retain, nonatomic) MMUILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
- (void)onTouchUpInside;
- (void)layoutInternal;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutHKNewYearBubbleContentView;
- (double)getContentMargin;
- (id)getContentTextColor;
- (void)layoutNormalBubbleContentView;
- (void)layoutContentView;
- (void)updateStatus;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) WCPayC2CFestivalMsgViewModel *viewModel; // @dynamic viewModel;

@end

