//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveConcertInfo : NSObject
{
    _Bool _isConcert;
    NSString *_concertActivityId;
    unsigned long long _topicId;
    unsigned long long _topicType;
}

+ (id)concertInfoWithBackendModel:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long topicType; // @synthesize topicType=_topicType;
@property(nonatomic) unsigned long long topicId; // @synthesize topicId=_topicId;
@property(retain, nonatomic) NSString *concertActivityId; // @synthesize concertActivityId=_concertActivityId;
@property(nonatomic) _Bool isConcert; // @synthesize isConcert=_isConcert;

@end

