//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MinimizePlayingStateChangeInfo : NSObject
{
    unsigned int _state;
    unsigned long long _startTimeStamp;
}

+ (id)stateChangeInfoWithNewState:(unsigned int)arg1;
@property(nonatomic) unsigned long long startTimeStamp; // @synthesize startTimeStamp=_startTimeStamp;
@property(nonatomic) unsigned int state; // @synthesize state=_state;

@end

