//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderMJSetNecessaryParams, WCFinderMJSetOptionalParams;

@interface WCFinderMJSetInitParams : NSObject
{
    WCFinderMJSetNecessaryParams *_necessaryParams;
    WCFinderMJSetOptionalParams *_optionalParams;
}

+ (id)paramsWithTemplateShortUrl:(id)arg1;
+ (id)paramsWithTemplateTopicId:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMJSetOptionalParams *optionalParams; // @synthesize optionalParams=_optionalParams;
@property(retain, nonatomic) WCFinderMJSetNecessaryParams *necessaryParams; // @synthesize necessaryParams=_necessaryParams;
- (id)initWithTemplateShortUrl:(id)arg1;
- (id)initWithTemplateTopicId:(id)arg1;

@end

