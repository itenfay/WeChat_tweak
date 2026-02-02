//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MailMessageViewModel, UIImageView;

@interface MailMessageCellView : NSObject
{
    UIImageView *m_bgImageView;
}

- (void)onTouchUpInside;
- (void)setHighlighted:(_Bool)arg1;
- (void)onDelete:(id)arg1;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) MailMessageViewModel *viewModel; // @dynamic viewModel;

@end

