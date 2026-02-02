//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AttributeLabel, MMHeadImageView, NSString, UIImage, UIImageView;

@interface FindContactSearchCell
{
    NSString *_searchText;
    NSString *_displayName;
    NSString *_detail;
    UIImage *_headImage;
    MMHeadImageView *_headImageView;
    UIImageView *_imageView;
    AttributeLabel *_displayNameLabel;
    AttributeLabel *_detailLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void)updateSearchCellWithSearchText:(id)arg1;
- (void)updateWithImage:(id)arg1 displayName:(id)arg2 detail:(id)arg3 searchText:(id)arg4;
- (void)updateStatus:(_Bool)arg1;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

