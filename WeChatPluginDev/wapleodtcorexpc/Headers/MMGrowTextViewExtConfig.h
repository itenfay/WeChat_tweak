//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface MMGrowTextViewExtConfig : NSObject
{
    _Bool _enableColorTopicTag;
    _Bool _enableInputSharpHelperMenu;
    _Bool _enableTopicSearchMenu;
    _Bool _enableTranslateTool;
    _Bool _enableFullScreenInput;
    _Bool _disableBackgroundImageInsets;
    _Bool _disableLineFragmentPadding;
    _Bool _enablePlaceholderPinText;
    _Bool _useDefaultReturnKey;
    _Bool _donotNeedTextViewContentTopBottomInset;
    UIColor *_topicColor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool donotNeedTextViewContentTopBottomInset; // @synthesize donotNeedTextViewContentTopBottomInset=_donotNeedTextViewContentTopBottomInset;
@property(nonatomic) _Bool useDefaultReturnKey; // @synthesize useDefaultReturnKey=_useDefaultReturnKey;
@property(nonatomic) _Bool enablePlaceholderPinText; // @synthesize enablePlaceholderPinText=_enablePlaceholderPinText;
@property(nonatomic) _Bool disableLineFragmentPadding; // @synthesize disableLineFragmentPadding=_disableLineFragmentPadding;
@property(nonatomic) _Bool disableBackgroundImageInsets; // @synthesize disableBackgroundImageInsets=_disableBackgroundImageInsets;
@property(retain, nonatomic) UIColor *topicColor; // @synthesize topicColor=_topicColor;
@property(nonatomic) _Bool enableFullScreenInput; // @synthesize enableFullScreenInput=_enableFullScreenInput;
@property(nonatomic) _Bool enableTranslateTool; // @synthesize enableTranslateTool=_enableTranslateTool;
@property(nonatomic) _Bool enableTopicSearchMenu; // @synthesize enableTopicSearchMenu=_enableTopicSearchMenu;
@property(nonatomic) _Bool enableInputSharpHelperMenu; // @synthesize enableInputSharpHelperMenu=_enableInputSharpHelperMenu;
@property(nonatomic) _Bool enableColorTopicTag; // @synthesize enableColorTopicTag=_enableColorTopicTag;

@end

