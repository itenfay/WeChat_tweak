//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface SendRingBackToListenRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(nonatomic) unsigned long long cliMinSeq; // @dynamic cliMinSeq;
@property(retain, nonatomic) NSMutableArray *disableSimpleRingBacks; // @dynamic disableSimpleRingBacks;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned long long totalScanRingBackCount; // @dynamic totalScanRingBackCount;
@property(nonatomic) unsigned long long totalSendRingBackCount; // @dynamic totalSendRingBackCount;

@end

