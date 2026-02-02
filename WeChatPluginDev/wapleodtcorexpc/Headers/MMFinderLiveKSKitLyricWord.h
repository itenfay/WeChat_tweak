//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveKSKitLyricWord : NSObject
{
    int _startTime;
    int _duration;
    NSString *_content;
    struct CGSize _labelSize;
}

+ (_Bool)isLyricWordContentCHN:(id)arg1;
+ (id)parseLyricWord:(id)arg1 inSentence:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize labelSize; // @synthesize labelSize=_labelSize;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(nonatomic) int startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) int endTime;
- (id)description;

@end

