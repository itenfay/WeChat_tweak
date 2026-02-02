//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont;

@interface MMFinderLiveTrailingButtonTextViewStyle : NSObject
{
    UIFont *_textFont;
    UIFont *_buttonFont;
    UIColor *_textColor;
    UIColor *_buttonColor;
    NSString *_buttonTitle;
    unsigned long long _lineLimit;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long lineLimit; // @synthesize lineLimit=_lineLimit;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) UIColor *buttonColor; // @synthesize buttonColor=_buttonColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *buttonFont; // @synthesize buttonFont=_buttonFont;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;

@end

