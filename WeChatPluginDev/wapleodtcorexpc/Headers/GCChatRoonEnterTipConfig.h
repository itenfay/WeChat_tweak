//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, UIColor;

@interface GCChatRoonEnterTipConfig : NSObject
{
    NSString *_title;
    NSAttributedString *_content;
    NSString *_userIconImg;
    NSString *_conditionTip;
    NSString *_btnText;
    UIColor *_backGroundColor;
    NSString *_backGroundImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *backGroundImage; // @synthesize backGroundImage=_backGroundImage;
@property(retain, nonatomic) UIColor *backGroundColor; // @synthesize backGroundColor=_backGroundColor;
@property(retain, nonatomic) NSString *btnText; // @synthesize btnText=_btnText;
@property(retain, nonatomic) NSString *conditionTip; // @synthesize conditionTip=_conditionTip;
@property(retain, nonatomic) NSString *userIconImg; // @synthesize userIconImg=_userIconImg;
@property(retain, nonatomic) NSAttributedString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

