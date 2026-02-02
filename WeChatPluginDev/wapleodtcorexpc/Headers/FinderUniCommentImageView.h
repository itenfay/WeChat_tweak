//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class MVImageLoader, NSString, UIImage;

@interface FinderUniCommentImageView : UIImageView
{
    MVImageLoader *_imageLoader;
    NSString *_imageUrl;
    UIImage *_defaultImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) MVImageLoader *imageLoader; // @synthesize imageLoader=_imageLoader;
- (void)setImageUrl:(id)arg1 token:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

