//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderUpdateTopicModel : NSObject
{
    NSString *_inputTopic;
    struct _NSRange _topicRange;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange topicRange; // @synthesize topicRange=_topicRange;
@property(copy, nonatomic) NSString *inputTopic; // @synthesize inputTopic=_inputTopic;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isValid;
- (id)initWithInputTopic:(id)arg1 topicRange:(struct _NSRange)arg2;

@end

