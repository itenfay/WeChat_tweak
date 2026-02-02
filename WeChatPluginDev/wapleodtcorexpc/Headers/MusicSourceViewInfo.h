//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MusicSourceViewInfo : NSObject
{
    _Bool _enableExpandAnimation;
    int _audioType;
    long long _loopCount;
}

@property(nonatomic) _Bool enableExpandAnimation; // @synthesize enableExpandAnimation=_enableExpandAnimation;
@property(nonatomic) long long loopCount; // @synthesize loopCount=_loopCount;
@property(nonatomic) int audioType; // @synthesize audioType=_audioType;

@end

