//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel;

@interface WXGChatLogSessionItemCell
{
    UIImageView *_selectedImage;
    UIImageView *_resourceIcon;
    UILabel *_sizeLabel;
    UILabel *_sourceLabel;
    shared_ptr_5102c92c _sessionItem;
}

+ (double)cellHeight;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_5102c92c sessionItem; // @synthesize sessionItem=_sessionItem;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) UIImageView *resourceIcon; // @synthesize resourceIcon=_resourceIcon;
@property(retain, nonatomic) UIImageView *selectedImage; // @synthesize selectedImage=_selectedImage;
- (void)updateSessionItem:(shared_ptr_5102c92c)arg1 selected:(_Bool)arg2 textOnly:(_Bool)arg3 textType:(unsigned long long)arg4;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

