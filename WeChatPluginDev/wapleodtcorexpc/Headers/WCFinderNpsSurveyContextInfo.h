//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderNpsSurveyContextInfo : NSObject
{
    int _pageScene;
    unsigned long long _enterIndexInFeedStream;
    unsigned long long _currentIndexInFeedStream;
    NSString *_contentTid;
    unsigned long long _contentMediaType;
    unsigned long long _relativeIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long relativeIndex; // @synthesize relativeIndex=_relativeIndex;
@property(nonatomic) unsigned long long contentMediaType; // @synthesize contentMediaType=_contentMediaType;
@property(copy, nonatomic) NSString *contentTid; // @synthesize contentTid=_contentTid;
@property(nonatomic) unsigned long long currentIndexInFeedStream; // @synthesize currentIndexInFeedStream=_currentIndexInFeedStream;
@property(nonatomic) unsigned long long enterIndexInFeedStream; // @synthesize enterIndexInFeedStream=_enterIndexInFeedStream;
@property(nonatomic) int pageScene; // @synthesize pageScene=_pageScene;

@end

