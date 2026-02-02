//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderRecommendTagCellModel : NSObject
{
    NSString *_topicString;
    long long _topicNumber;
}

- (void).cxx_destruct;
@property(nonatomic) long long topicNumber; // @synthesize topicNumber=_topicNumber;
@property(copy, nonatomic) NSString *topicString; // @synthesize topicString=_topicString;
- (id)init;

@end

