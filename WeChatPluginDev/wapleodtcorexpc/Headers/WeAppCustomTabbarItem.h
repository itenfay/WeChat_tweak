//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSAttributedString, UIImage;

@interface WeAppCustomTabbarItem : NSObject
{
    UIImage *_normalImage;
    UIImage *_selectedImage;
    NSAttributedString *_normalText;
    NSAttributedString *_selectedText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSAttributedString *selectedText; // @synthesize selectedText=_selectedText;
@property(retain, nonatomic) NSAttributedString *normalText; // @synthesize normalText=_normalText;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;

@end

