//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCTopicUtil
{
}

+ (id)topicContentWithoutTag:(id)arg1;
+ (_Bool)isContentMayContainTopic:(id)arg1;
+ (id)topicQueryInfoFromText:(id)arg1;
+ (void)showTopicSearchControllerInHalfScreen:(id)arg1 inViewController:(id)arg2;
+ (id)topicSearchViewControllerWithDelegate:(id)arg1 context:(id)arg2;
+ (id)topicStringArrWithNsContent:(id)arg1 inRange:(struct _NSRange)arg2;
+ (id)topicRangeArrWithNsContent:(id)arg1 inRange:(struct _NSRange)arg2;
+ (id)topicSearchRegex;
+ (id)searchTagInfoFromWCDataItem:(id)arg1 commentItem:(id)arg2;

@end

