//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCFinderEventTabInfo : NSObject
{
    unsigned int _innerTabType;
    NSString *_tabName;
    unsigned long long _topicId;
    NSArray *_filterList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *filterList; // @synthesize filterList=_filterList;
@property(nonatomic) unsigned long long topicId; // @synthesize topicId=_topicId;
@property(copy, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
@property(nonatomic) unsigned int innerTabType; // @synthesize innerTabType=_innerTabType;
- (id)reportDict;
- (unsigned long long)indexOfFilterType:(unsigned int)arg1;
- (id)filterInfoAtIndex:(unsigned long long)arg1;
- (id)initWithMusicTopicHashTagInfo:(id)arg1;
- (id)initWithTopicHashTagInfo:(id)arg1;

@end

