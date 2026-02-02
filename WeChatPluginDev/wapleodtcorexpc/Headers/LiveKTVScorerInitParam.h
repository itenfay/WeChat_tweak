//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface LiveKTVScorerInitParam : NSObject
{
    int _channelCnt;
    int _sampleRate;
}

+ (id)defaultParam;
@property(nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) int channelCnt; // @synthesize channelCnt=_channelCnt;
- (_Bool)isEqual:(id)arg1;

@end

