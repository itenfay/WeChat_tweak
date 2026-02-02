//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandDetailNotificationCellViewModel, MMHeadImageView, UIButton, UILabel, WCTagsView, YYLabel;

@interface BrandDetailNotificationCellView
{
    MMHeadImageView *_headView;
    UILabel *_nameLabel;
    UIButton *_followButton;
    WCTagsView *_tagsView;
    YYLabel *_titleLabel;
    YYLabel *_detailLabel;
    UILabel *_dateLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) YYLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) YYLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCTagsView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMHeadImageView *headView; // @synthesize headView=_headView;
- (id)accessibilityLabel;
- (void)initSubViews;
- (void)updateViewModel:(id)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, nonatomic) BrandDetailNotificationCellViewModel *viewModel; // @dynamic viewModel;

@end

