//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;

@interface TextStateIconDescriptionTopicModel
{
    _Bool _dataConstructed;
    NSMutableDictionary *_iconIdToTextStateList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *iconIdToTextStateList; // @synthesize iconIdToTextStateList=_iconIdToTextStateList;
@property(nonatomic, getter=isDataConstructed) _Bool dataConstructed; // @synthesize dataConstructed=_dataConstructed;
- (void)privateDeleteTextState:(id)arg1;
- (void)privateAddOrUpdateTextState:(id)arg1;
- (void)constructDataIfNeeded;
- (id)mostFrequentAndRecentClusterPresent;
- (id)clusterPresent;
- (void)onTopicDeleteWithTextState:(id)arg1;
- (void)onTopicAddOrUpdateWithTextState:(id)arg1;
- (id)topicPresentType;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

