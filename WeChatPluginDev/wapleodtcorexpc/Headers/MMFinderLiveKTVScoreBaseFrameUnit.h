//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderLiveKTVScoreBaseFrameUnit : NSObject
{
    int _inSize;
    char *_inBuffer;
    double _timeOffsetMS;
}

@property(nonatomic) double timeOffsetMS; // @synthesize timeOffsetMS=_timeOffsetMS;
@property(nonatomic) int inSize; // @synthesize inSize=_inSize;
@property(nonatomic) char *inBuffer; // @synthesize inBuffer=_inBuffer;
- (id)initWithInBuffer:(char *)arg1 inSize:(int)arg2 timeOffsetMS:(double)arg3;

@end

