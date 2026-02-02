//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppRingBackMessageViewModel, UIImageView;

@interface AppRingBackMessageCellView
{
    UIImageView *_bubbleView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *bubbleView; // @synthesize bubbleView=_bubbleView;
- (_Bool)shouldLayoutIfNeeded;
- (void)setHighlighted:(_Bool)arg1;
- (void)onTouchUpInside;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) AppRingBackMessageViewModel *viewModel;

@end

