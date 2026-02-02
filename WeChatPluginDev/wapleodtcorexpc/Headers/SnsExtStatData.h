//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface SnsExtStatData : WXPBGeneratedMessage
{
    int errCodeListMemoizedSerializedSize;
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int currentRequestTime; // @dynamic currentRequestTime;
@property(nonatomic) unsigned int errCodeCount; // @dynamic errCodeCount;
@property(retain, nonatomic) NSMutableArray *errCodeList; // @dynamic errCodeList;
@property(nonatomic) unsigned int firstRequestTime; // @dynamic firstRequestTime;
@property(nonatomic) unsigned int retryScene; // @dynamic retryScene;
@property(nonatomic) unsigned int retryTimes; // @dynamic retryTimes;

@end

