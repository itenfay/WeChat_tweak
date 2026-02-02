//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, OrderedDictionary;

@interface TextStateTopicModel : NSObject
{
    NSString *_topicId;
    OrderedDictionary *_usernameToTextState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OrderedDictionary *usernameToTextState; // @synthesize usernameToTextState=_usernameToTextState;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
- (_Bool)localJudgeClusterWithTopicId:(id)arg1;
- (id)clusterPresent;
- (void)onTopicDeleteWithTextState:(id)arg1;
- (void)onTopicAddOrUpdateWithTextState:(id)arg1;
- (id)topicPresentType;
- (void)inserSelfStatus;
- (long long)compare:(id)arg1;
- (void)sortUsernames;
- (id)anyTextState;
- (id)textStateForUsername:(id)arg1;
- (void)deleteUsername:(id)arg1;
- (void)addOrUpdateUsername:(id)arg1 textState:(id)arg2;
- (id)usernames;
- (id)iconWrap;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

