//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderTemplateProcessVCOutPutParams : NSObject
{
    NSString *_templateId;
    NSString *_templateMusicId;
    NSString *_eventName;
    NSString *_eventCreaterNickName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *eventCreaterNickName; // @synthesize eventCreaterNickName=_eventCreaterNickName;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(copy, nonatomic) NSString *templateMusicId; // @synthesize templateMusicId=_templateMusicId;
@property(copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;

@end

