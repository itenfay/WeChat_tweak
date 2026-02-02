//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPRichMediaFeatureContent : NSObject
{
    long long _startTimeMs;
    long long _endTimeMs;
    NSString *_content;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long endTimeMs; // @synthesize endTimeMs=_endTimeMs;
@property(nonatomic) long long startTimeMs; // @synthesize startTimeMs=_startTimeMs;

@end

