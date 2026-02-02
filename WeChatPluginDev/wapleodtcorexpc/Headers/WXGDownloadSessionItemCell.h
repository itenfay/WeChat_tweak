//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView, UILabel;

@interface WXGDownloadSessionItemCell
{
    UIImageView *_selectedImage;
    UIImageView *_resourceIcon;
    UILabel *_sizeLabel;
    UILabel *_sourceLabel;
    NSString *_userName;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) UIImageView *resourceIcon; // @synthesize resourceIcon=_resourceIcon;
@property(retain, nonatomic) UIImageView *selectedImage; // @synthesize selectedImage=_selectedImage;
- (void)updateSessionItem:(id)arg1 size:(unsigned long long)arg2 selected:(_Bool)arg3;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

