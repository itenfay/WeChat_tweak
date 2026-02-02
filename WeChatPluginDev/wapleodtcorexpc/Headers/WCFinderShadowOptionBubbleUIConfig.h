//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIImage;

@interface WCFinderShadowOptionBubbleUIConfig : NSObject
{
    UIImage *_leftImage;
    NSString *_leftContent;
    NSString *_rightTips;
    UIColor *_rightTipsBtnBkColor;
    UIColor *_rightTipsBtnFontColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *rightTipsBtnFontColor; // @synthesize rightTipsBtnFontColor=_rightTipsBtnFontColor;
@property(retain, nonatomic) UIColor *rightTipsBtnBkColor; // @synthesize rightTipsBtnBkColor=_rightTipsBtnBkColor;
@property(retain, nonatomic) NSString *rightTips; // @synthesize rightTips=_rightTips;
@property(retain, nonatomic) NSString *leftContent; // @synthesize leftContent=_leftContent;
@property(retain, nonatomic) UIImage *leftImage; // @synthesize leftImage=_leftImage;

@end

