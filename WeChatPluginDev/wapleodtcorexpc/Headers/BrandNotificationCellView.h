//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandNotificationCellViewModel, CALayer, MMHeadImageView, MMUILabel, RichTextView;

@interface BrandNotificationCellView
{
    BrandNotificationCellViewModel *_viewModel;
    RichTextView *_messageLabel;
    RichTextView *_contactNameLabel;
    MMUILabel *_timeLabel;
    MMHeadImageView *_headerView;
    CALayer *_bottomLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) MMHeadImageView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) RichTextView *contactNameLabel; // @synthesize contactNameLabel=_contactNameLabel;
@property(retain, nonatomic) RichTextView *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) BrandNotificationCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)accessibilityLabel;
- (id)genMenuItems;
- (void)layoutSubviews;
- (void)updateHeaderViewSize;
- (void)initMessageLabel;
- (void)initContactNameLabel;
- (void)initHeaderView;
- (void)initSubViews;
- (void)updateTimeLabel;
- (void)updateViewModel:(id)arg1;
- (id)initWithModel:(id)arg1;

@end

