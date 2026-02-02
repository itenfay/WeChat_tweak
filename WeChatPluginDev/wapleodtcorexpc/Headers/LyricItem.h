//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface LyricItem : NSObject
{
    NSString *_lyric;
    double _startTime;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithLyric:(id)arg1 startTime:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *lyric; // @synthesize lyric=_lyric;
- (id)toList;

@end

