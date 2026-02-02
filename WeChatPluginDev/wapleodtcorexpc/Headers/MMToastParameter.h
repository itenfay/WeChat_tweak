//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableAttributedString, NSString, UIImage, UIView;
@protocol MultiLineTextView;

@interface MMToastParameter : NSObject
{
    NSString *_text;
    NSMutableAttributedString *_attributedString;
    NSString *_svgIconName;
    UIImage *_iconImage;
    UIView<MultiLineTextView> *_customView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView<MultiLineTextView> *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) NSString *svgIconName; // @synthesize svgIconName=_svgIconName;
@property(retain, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (_Bool)isValid;

@end

