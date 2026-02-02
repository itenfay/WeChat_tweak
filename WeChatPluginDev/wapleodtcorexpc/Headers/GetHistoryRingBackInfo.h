//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class RingBackDetail;

@interface GetHistoryRingBackInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) RingBackDetail *ringBackDetail; // @dynamic ringBackDetail;
@property(nonatomic) unsigned long long seq; // @dynamic seq;
@property(nonatomic) unsigned int updateTime; // @dynamic updateTime;

@end

