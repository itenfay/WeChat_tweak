//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPRichMediaSelectFeatureParam : NSObject
{
    long long _featureIndex;
    long long _seq;
    long long _startTimeMs;
}

@property(nonatomic) long long startTimeMs; // @synthesize startTimeMs=_startTimeMs;
@property(nonatomic) long long seq; // @synthesize seq=_seq;
@property(nonatomic) long long featureIndex; // @synthesize featureIndex=_featureIndex;

@end

