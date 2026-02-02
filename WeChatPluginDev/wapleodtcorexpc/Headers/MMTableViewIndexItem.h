//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImage, UIImageView, UILabel, UIView;

@interface MMTableViewIndexItem
{
    UILabel *_label;
    UIImageView *_imageView;
    UIView *_backgroundRoundView;
    _Bool _selected;
    NSString *_title;
    UIImage *_iconImage;
    UIImage *_renderedIconImage;
    UIImage *_searchIconImage;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIImage *searchIconImage; // @synthesize searchIconImage=_searchIconImage;
@property(retain, nonatomic) UIImage *renderedIconImage; // @synthesize renderedIconImage=_renderedIconImage;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (double)indexWidth;
- (void)reloadViewWithBrandColor:(id)arg1;

@end

