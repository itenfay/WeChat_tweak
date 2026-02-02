//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveGenericPaymentConfig : NSObject
{
    _Bool _showTopRightQuestionView;
    NSString *_title;
    NSString *_subtitle;
    NSString *_agreementRichText;
    NSString *_defaultPayButtonTitle;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showTopRightQuestionView; // @synthesize showTopRightQuestionView=_showTopRightQuestionView;
@property(retain, nonatomic) NSString *defaultPayButtonTitle; // @synthesize defaultPayButtonTitle=_defaultPayButtonTitle;
@property(retain, nonatomic) NSString *agreementRichText; // @synthesize agreementRichText=_agreementRichText;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

