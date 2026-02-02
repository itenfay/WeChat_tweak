//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface BTRecommendFeedbackInfo : NSObject
{
    _Bool _bShowFeedback;
    NSArray *_feedbackReasonArr;
    NSString *_negativeFeedbackTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *negativeFeedbackTitle; // @synthesize negativeFeedbackTitle=_negativeFeedbackTitle;
@property(nonatomic) _Bool bShowFeedback; // @synthesize bShowFeedback=_bShowFeedback;
@property(retain, nonatomic) NSArray *feedbackReasonArr; // @synthesize feedbackReasonArr=_feedbackReasonArr;

@end

