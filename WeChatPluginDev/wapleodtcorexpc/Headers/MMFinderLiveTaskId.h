//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMFinderLiveTaskId
{
    NSString *_taskKey;
    _Bool _isEnableComment;
    NSString *_finderUserName;
    unsigned long long _lastTaskKeyLiveId;
    NSString *_uniqueId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(nonatomic) unsigned long long lastTaskKeyLiveId; // @synthesize lastTaskKeyLiveId=_lastTaskKeyLiveId;
@property(nonatomic) _Bool isEnableComment; // @synthesize isEnableComment=_isEnableComment;
@property(copy, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isValid;
- (id)createTaskKey;
- (id)taskKey;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;

@end

