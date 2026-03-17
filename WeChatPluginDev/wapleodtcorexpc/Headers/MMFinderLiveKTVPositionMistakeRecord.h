//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderLiveKTVPositionMistakeRecord : NSObject
{
    int _mistakeDis;
    int _maxAcceptMistake;
    int _positionUpdateInterval;
}

@property(nonatomic) int positionUpdateInterval; // @synthesize positionUpdateInterval=_positionUpdateInterval;
@property(nonatomic) int maxAcceptMistake; // @synthesize maxAcceptMistake=_maxAcceptMistake;
@property(nonatomic) int mistakeDis; // @synthesize mistakeDis=_mistakeDis;

@end

