//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImageActionSheet, MMUIViewController, NSString, UIImage;

@interface MMImageActionSheetItem
{
    _Bool _isHidden;
    _Bool _isClickable;
    unsigned long long _type;
    NSString *_imagePath;
    UIImage *_image;
    MMUIViewController *_curViewController;
    MMImageActionSheet *_imageActionSheet;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMImageActionSheet *imageActionSheet; // @synthesize imageActionSheet=_imageActionSheet;
@property(nonatomic) __weak MMUIViewController *curViewController; // @synthesize curViewController=_curViewController;
@property(nonatomic) _Bool isClickable; // @synthesize isClickable=_isClickable;
@property(nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)onImageActionSheetDidChangeImage;
- (void)onImageActionSheetDidAppear;
- (void)handleWithImage;
- (id)init;

@end

