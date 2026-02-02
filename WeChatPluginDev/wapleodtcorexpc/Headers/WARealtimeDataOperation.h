//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WARealtimeDataOperation
{
    int _operationId;
    int _type;
    unsigned int _retryCount;
    unsigned int _lastOperateTimeStamp;
    NSString *_appid;
    unsigned long long _priorityLevel;
    NSData *_contentsBytes;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int lastOperateTimeStamp; // @synthesize lastOperateTimeStamp=_lastOperateTimeStamp;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSData *contentsBytes; // @synthesize contentsBytes=_contentsBytes;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) unsigned long long priorityLevel; // @synthesize priorityLevel=_priorityLevel;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(nonatomic) int operationId; // @synthesize operationId=_operationId;
- (id)description;
- (_Bool)time:(unsigned int)arg1 inRetryInterval:(unsigned int)arg2;
- (unsigned long long)dataSize;

@end

