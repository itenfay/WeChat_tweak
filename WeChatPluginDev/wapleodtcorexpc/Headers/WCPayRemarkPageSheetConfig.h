//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface WCPayRemarkPageSheetConfig : NSObject
{
    _Bool _showRightButton;
    unsigned int _maxInputLength;
    unsigned int _maxInputLengthForDiaplay;
    NSString *_title;
    NSString *_placeHolder;
    NSString *_currentContent;
    double _textViewMaxHeight;
    UIImage *_rightButtonImage;
    NSString *_rightButtonTitle;
    long long _bottomType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int maxInputLengthForDiaplay; // @synthesize maxInputLengthForDiaplay=_maxInputLengthForDiaplay;
@property(nonatomic) long long bottomType; // @synthesize bottomType=_bottomType;
@property(retain, nonatomic) NSString *rightButtonTitle; // @synthesize rightButtonTitle=_rightButtonTitle;
@property(retain, nonatomic) UIImage *rightButtonImage; // @synthesize rightButtonImage=_rightButtonImage;
@property(nonatomic) _Bool showRightButton; // @synthesize showRightButton=_showRightButton;
@property(nonatomic) double textViewMaxHeight; // @synthesize textViewMaxHeight=_textViewMaxHeight;
@property(retain, nonatomic) NSString *currentContent; // @synthesize currentContent=_currentContent;
@property(nonatomic) unsigned int maxInputLength; // @synthesize maxInputLength=_maxInputLength;
@property(retain, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

