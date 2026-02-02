//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderTopicListSectionHeaderViewOptionParams : NSObject
{
    _Bool _showHighlightTopicStyle;
    int _commentScene;
    NSString *_topicId;
    NSString *_topicName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showHighlightTopicStyle; // @synthesize showHighlightTopicStyle=_showHighlightTopicStyle;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(copy, nonatomic) NSString *topicName; // @synthesize topicName=_topicName;
@property(copy, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;

@end

