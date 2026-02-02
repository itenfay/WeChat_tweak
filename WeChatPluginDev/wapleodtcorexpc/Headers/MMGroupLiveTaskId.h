//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMGroupLiveTaskId
{
    NSString *_roomId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isValid;
- (id)taskKey;
- (id)initWithLiveId:(unsigned long long)arg1 roomId:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;

@end

