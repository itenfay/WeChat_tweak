//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ImageScrollView, NSArray;

@interface MMScreenSharingImageBrowserController
{
    NSArray *_imageURLs;
    double _contentRatioY;
    ImageScrollView *_imageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ImageScrollView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) double contentRatioY; // @synthesize contentRatioY=_contentRatioY;
@property(copy, nonatomic) NSArray *imageURLs; // @synthesize imageURLs=_imageURLs;
- (void)layoutImageViewWithFrame:(struct CGRect)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;
- (id)initWithImageURLs:(id)arg1;

@end

