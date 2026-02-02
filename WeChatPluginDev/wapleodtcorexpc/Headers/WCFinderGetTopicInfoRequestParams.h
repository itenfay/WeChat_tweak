//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCFinderGetTopicInfoRequestParams : NSObject
{
    int _topicType;
    int _prefetchType;
    int _getTopicInfoFlag;
    NSString *_topicWording;
    unsigned long long _topicId;
    NSString *_encryptedEventTopicId;
    NSString *_fromObjectId;
    NSData *_topicInfoPassbuff;
}

- (void).cxx_destruct;
@property(nonatomic) int getTopicInfoFlag; // @synthesize getTopicInfoFlag=_getTopicInfoFlag;
@property(retain, nonatomic) NSData *topicInfoPassbuff; // @synthesize topicInfoPassbuff=_topicInfoPassbuff;
@property(copy, nonatomic) NSString *fromObjectId; // @synthesize fromObjectId=_fromObjectId;
@property(copy, nonatomic) NSString *encryptedEventTopicId; // @synthesize encryptedEventTopicId=_encryptedEventTopicId;
@property(nonatomic) unsigned long long topicId; // @synthesize topicId=_topicId;
@property(copy, nonatomic) NSString *topicWording; // @synthesize topicWording=_topicWording;
@property(nonatomic) int prefetchType; // @synthesize prefetchType=_prefetchType;
@property(nonatomic) int topicType; // @synthesize topicType=_topicType;
- (id)description;
- (id)initWithTopicType:(int)arg1 prefetchType:(int)arg2 topicWording:(id)arg3 topicId:(unsigned long long)arg4 encryptedEventTopicId:(id)arg5 fromObjectId:(id)arg6 topicInfoPassbuff:(id)arg7 getTopicInfoFlag:(int)arg8;

@end

