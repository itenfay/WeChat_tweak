//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BTRecommendFeedbackInfo, NSString;

@interface BTRecommendUserInfo : NSObject
{
    BTRecommendFeedbackInfo *_feedbackInfo;
    NSString *_versionInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *versionInfo; // @synthesize versionInfo=_versionInfo;
@property(retain, nonatomic) BTRecommendFeedbackInfo *feedbackInfo; // @synthesize feedbackInfo=_feedbackInfo;

@end

