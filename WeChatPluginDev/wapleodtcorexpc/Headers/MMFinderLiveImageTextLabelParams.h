//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont, UIImage;

@interface MMFinderLiveImageTextLabelParams : NSObject
{
    NSString *_leftImageURL;
    double _imageToText;
    UIFont *_font;
    UIColor *_textColor;
    NSString *_text;
    UIImage *_rightImage;
    struct CGSize _leftImageSize;
    struct UIEdgeInsets _padding;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *rightImage; // @synthesize rightImage=_rightImage;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) struct CGSize leftImageSize; // @synthesize leftImageSize=_leftImageSize;
@property(nonatomic) double imageToText; // @synthesize imageToText=_imageToText;
@property(retain, nonatomic) NSString *leftImageURL; // @synthesize leftImageURL=_leftImageURL;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;

@end

