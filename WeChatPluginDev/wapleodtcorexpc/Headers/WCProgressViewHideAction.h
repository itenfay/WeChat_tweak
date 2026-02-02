//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCProgressViewHideAction
{
    _Bool _needShowInfo;
    long long _currentInfoType;
    unsigned long long _currentDelayTimeMS;
    CDUnknownBlockType _currentCompletion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType currentCompletion; // @synthesize currentCompletion=_currentCompletion;
@property(nonatomic) unsigned long long currentDelayTimeMS; // @synthesize currentDelayTimeMS=_currentDelayTimeMS;
@property(nonatomic) long long currentInfoType; // @synthesize currentInfoType=_currentInfoType;
@property(nonatomic) _Bool needShowInfo; // @synthesize needShowInfo=_needShowInfo;
@property(readonly, copy, nonatomic) CDUnknownBlockType completion;
@property(readonly, copy, nonatomic) CDUnknownBlockType delayTimeMS;
@property(readonly, copy, nonatomic) CDUnknownBlockType infoType;
@property(readonly, copy, nonatomic) CDUnknownBlockType text;
- (CDUnknownBlockType)block;
@property(readonly, copy, nonatomic) CDUnknownBlockType progress;

@end

