//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITabBarItem.h>

@class NSString, NSURL, NSValue, UIColor, UIImage;

@interface MMTabbarItem : UITabBarItem
{
    NSString *_normalTitle;
    UIColor *_normalTitleColor;
    UIColor *_selectedTitleColor;
    UIImage *_normalImage;
    UIImage *_highlightImage;
    NSURL *_normalImageUrl;
    NSURL *_normalImageDarkUrl;
    NSURL *_highlightImageUrl;
    NSURL *_highlightImageDarkUrl;
    long long _index;
    NSValue *_customSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSValue *customSize; // @synthesize customSize=_customSize;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSURL *highlightImageDarkUrl; // @synthesize highlightImageDarkUrl=_highlightImageDarkUrl;
@property(retain, nonatomic) NSURL *highlightImageUrl; // @synthesize highlightImageUrl=_highlightImageUrl;
@property(retain, nonatomic) NSURL *normalImageDarkUrl; // @synthesize normalImageDarkUrl=_normalImageDarkUrl;
@property(retain, nonatomic) NSURL *normalImageUrl; // @synthesize normalImageUrl=_normalImageUrl;
@property(retain, nonatomic) UIImage *highlightImage; // @synthesize highlightImage=_highlightImage;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
@property(retain, nonatomic) UIColor *selectedTitleColor; // @synthesize selectedTitleColor=_selectedTitleColor;
@property(retain, nonatomic) UIColor *normalTitleColor; // @synthesize normalTitleColor=_normalTitleColor;
@property(retain, nonatomic) NSString *normalTitle; // @synthesize normalTitle=_normalTitle;
- (id)initWithTitle:(id)arg1 image:(id)arg2 selectedImage:(id)arg3;
- (id)initWithTitle:(id)arg1 normalImageUrl:(id)arg2 normalImageDarkUrL:(id)arg3 selectedImageUrl:(id)arg4 selectedImageDarkUrl:(id)arg5;
- (id)initWithTitle:(id)arg1 normalImage:(id)arg2 selectedImage:(id)arg3;

@end

