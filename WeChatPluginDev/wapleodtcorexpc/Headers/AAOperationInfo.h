//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface AAOperationInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int maxPayerNum; // @dynamic maxPayerNum;
@property(nonatomic) unsigned long long maxPerAmount; // @dynamic maxPerAmount;
@property(nonatomic) unsigned int maxReceiverNum; // @dynamic maxReceiverNum;
@property(nonatomic) unsigned long long maxTotalAmount; // @dynamic maxTotalAmount;
@property(nonatomic) unsigned int maxTotalNum; // @dynamic maxTotalNum;
@property(retain, nonatomic) NSString *notice; // @dynamic notice;
@property(retain, nonatomic) NSString *noticeUrl; // @dynamic noticeUrl;

@end

