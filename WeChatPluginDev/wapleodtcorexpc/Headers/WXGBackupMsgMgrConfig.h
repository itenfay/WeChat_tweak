//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WXGBackupMsgMgrConfig : NSObject
{
    unsigned int _msgListMsgCountLimit;
    unsigned long long _msgListTotalSizeLimit;
    unsigned long long _filterFileSize;
    long long _maxProducerSize;
    long long _maxBufferSize;
    long long _maxConsumerSize;
}

@property(nonatomic) long long maxConsumerSize; // @synthesize maxConsumerSize=_maxConsumerSize;
@property(nonatomic) long long maxBufferSize; // @synthesize maxBufferSize=_maxBufferSize;
@property(nonatomic) long long maxProducerSize; // @synthesize maxProducerSize=_maxProducerSize;
@property(nonatomic) unsigned long long filterFileSize; // @synthesize filterFileSize=_filterFileSize;
@property(nonatomic) unsigned long long msgListTotalSizeLimit; // @synthesize msgListTotalSizeLimit=_msgListTotalSizeLimit;
@property(nonatomic) unsigned int msgListMsgCountLimit; // @synthesize msgListMsgCountLimit=_msgListMsgCountLimit;
- (id)description;
- (id)init;

@end

