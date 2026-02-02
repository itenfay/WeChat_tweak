//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class RichTextView, UIImageView, UILabel, UIView, WCFinderShareTopicCellViewModel;

@interface WCFinderShareTopicCellView
{
    RichTextView *m_titleLabel;
    RichTextView *m_detailLabel;
    UIImageView *m_thumbImageView;
    UIView *_separator;
    UIImageView *_tinyIcon;
    UILabel *_finderLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *finderLabel; // @synthesize finderLabel=_finderLabel;
@property(retain, nonatomic) UIImageView *tinyIcon; // @synthesize tinyIcon=_tinyIcon;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (void)addThumbImageView;
- (double)digestMaxWidth;
- (id)digestFont;
- (void)addDetailLabel;
- (void)addTitleLabel;
- (void)layoutContentView;
- (_Bool)canBeReused;

// Remaining properties
@property(readonly, nonatomic) WCFinderShareTopicCellViewModel *viewModel; // @dynamic viewModel;

@end

