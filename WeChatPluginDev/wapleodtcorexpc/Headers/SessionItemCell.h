//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UIImageView, UILabel;

@interface SessionItemCell
{
    UIImageView *_selectedImage;
    UIImageView *_resourceIcon;
    UIButton *_detailButton;
    UILabel *_sizeLabel;
    UILabel *_sourceLabel;
    shared_ptr_5102c92c _sessionItem;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(readonly, nonatomic) shared_ptr_5102c92c sessionItem; // @synthesize sessionItem=_sessionItem;
@property(retain, nonatomic) UIButton *detailButton; // @synthesize detailButton=_detailButton;
- (void)layoutSubviews;
- (void)updateSessionItem:(const void *)arg1 selected:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;

@end

