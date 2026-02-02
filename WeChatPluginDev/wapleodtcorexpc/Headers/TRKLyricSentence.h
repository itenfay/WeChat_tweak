//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TRKLyricSentence : NSObject
{
    long long _since;
    long long _startTime;
    long long _duration;
    NSArray *_characters;
    NSArray *_segments;
    NSString *_text;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(retain, nonatomic) NSArray *characters; // @synthesize characters=_characters;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long since; // @synthesize since=_since;
- (id)initWithSentence:(id)arg1;

@end

