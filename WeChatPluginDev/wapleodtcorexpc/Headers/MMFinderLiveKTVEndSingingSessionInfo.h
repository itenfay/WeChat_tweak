//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveKTVEndSingingSessionInfo : NSObject
{
    _Bool _isWaitingResult;
    NSString *_songUniqueId;
    unsigned long long _tryCloseCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long tryCloseCount; // @synthesize tryCloseCount=_tryCloseCount;
@property(nonatomic) _Bool isWaitingResult; // @synthesize isWaitingResult=_isWaitingResult;
@property(copy, nonatomic) NSString *songUniqueId; // @synthesize songUniqueId=_songUniqueId;

@end

