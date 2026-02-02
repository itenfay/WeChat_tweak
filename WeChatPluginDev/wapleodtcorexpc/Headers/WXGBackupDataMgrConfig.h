//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WXGBackupDataMgrConfig : NSObject
{
    unsigned int _oneMediaSize;
    long long _maxProducerSize;
    long long _maxBufferSize;
    long long _maxConsumerSize;
}

@property(nonatomic) unsigned int oneMediaSize; // @synthesize oneMediaSize=_oneMediaSize;
@property(nonatomic) long long maxConsumerSize; // @synthesize maxConsumerSize=_maxConsumerSize;
@property(nonatomic) long long maxBufferSize; // @synthesize maxBufferSize=_maxBufferSize;
@property(nonatomic) long long maxProducerSize; // @synthesize maxProducerSize=_maxProducerSize;
- (id)init;

@end

