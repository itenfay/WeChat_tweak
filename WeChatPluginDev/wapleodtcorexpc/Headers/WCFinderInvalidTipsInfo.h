//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface WCFinderInvalidTipsInfo : NSObject
{
    NSString *_iconName;
    UIColor *_iconColor;
    NSString *_titleText;
    NSString *_descText;
    NSString *_buttonText;
    UIColor *_buttonBackgroundColor;
    UIColor *_buttonTitleColor;
    NSString *_complainText;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *complainText; // @synthesize complainText=_complainText;
@property(retain, nonatomic) UIColor *buttonTitleColor; // @synthesize buttonTitleColor=_buttonTitleColor;
@property(retain, nonatomic) UIColor *buttonBackgroundColor; // @synthesize buttonBackgroundColor=_buttonBackgroundColor;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *descText; // @synthesize descText=_descText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;

@end

