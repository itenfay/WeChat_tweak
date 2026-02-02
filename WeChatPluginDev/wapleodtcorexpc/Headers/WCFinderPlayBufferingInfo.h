//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderPlayBufferingInfo : NSObject
{
    _Bool _isFirstFrameLoading;
    unsigned long long _startLoadingTimestamp;
    unsigned long long _endLoadingTimestamp;
    unsigned long long _playbackTime;
    unsigned long long _bufferingType;
}

@property(nonatomic) unsigned long long bufferingType; // @synthesize bufferingType=_bufferingType;
@property(nonatomic) _Bool isFirstFrameLoading; // @synthesize isFirstFrameLoading=_isFirstFrameLoading;
@property(nonatomic) unsigned long long playbackTime; // @synthesize playbackTime=_playbackTime;
@property(nonatomic) unsigned long long endLoadingTimestamp; // @synthesize endLoadingTimestamp=_endLoadingTimestamp;
@property(nonatomic) unsigned long long startLoadingTimestamp; // @synthesize startLoadingTimestamp=_startLoadingTimestamp;

@end

