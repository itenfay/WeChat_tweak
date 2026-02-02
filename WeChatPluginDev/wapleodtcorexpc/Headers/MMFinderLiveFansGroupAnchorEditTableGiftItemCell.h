//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel;

@interface MMFinderLiveFansGroupAnchorEditTableGiftItemCell
{
    UIImageView *_thumbnailView;
    UILabel *_nameLabel;
    UILabel *_attachedTextLabel;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *attachedTextLabel; // @synthesize attachedTextLabel=_attachedTextLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
- (void)layoutSubviews;
- (void)updateWithGiftItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

