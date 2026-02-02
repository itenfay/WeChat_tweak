//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface WCAdFeedbackInfo : NSObject
{
    NSArray *_feedbackList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *feedbackList; // @synthesize feedbackList=_feedbackList;
- (long long)validFeedbackCnt;
- (id)validFeedbackList;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

