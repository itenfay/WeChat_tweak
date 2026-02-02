//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCFinderNpsSurveyTrackInfo : NSObject
{
    unsigned long long _shownQuestionId;
    unsigned long long _selectedAnswerId;
    NSString *_inputAnswerText;
    NSArray *_multiAnswerIDs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *multiAnswerIDs; // @synthesize multiAnswerIDs=_multiAnswerIDs;
@property(copy, nonatomic) NSString *inputAnswerText; // @synthesize inputAnswerText=_inputAnswerText;
@property(nonatomic) unsigned long long selectedAnswerId; // @synthesize selectedAnswerId=_selectedAnswerId;
@property(nonatomic) unsigned long long shownQuestionId; // @synthesize shownQuestionId=_shownQuestionId;

@end

