//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAAppStateChangedContextInfoLocationInfo
{
    _Bool _canKeepAliveByLocating;
    _Bool _isBackgroundLocating;
    _Bool _isLocationSharedResourceBeenRecovered;
}

@property(nonatomic) _Bool isLocationSharedResourceBeenRecovered; // @synthesize isLocationSharedResourceBeenRecovered=_isLocationSharedResourceBeenRecovered;
@property(nonatomic) _Bool isBackgroundLocating; // @synthesize isBackgroundLocating=_isBackgroundLocating;
@property(nonatomic) _Bool canKeepAliveByLocating; // @synthesize canKeepAliveByLocating=_canKeepAliveByLocating;
- (id)description;

@end

