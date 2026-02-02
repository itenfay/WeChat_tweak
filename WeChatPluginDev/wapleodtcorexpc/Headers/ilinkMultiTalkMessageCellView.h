//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, ilinkMultiTalkMessageViewModel;

@interface ilinkMultiTalkMessageCellView
{
    UIImageView *_bubbleView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *bubbleView; // @synthesize bubbleView=_bubbleView;
- (_Bool)shouldLayoutIfNeeded;
- (void)onTouchUpInside;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) ilinkMultiTalkMessageViewModel *viewModel; // @dynamic viewModel;

@end

