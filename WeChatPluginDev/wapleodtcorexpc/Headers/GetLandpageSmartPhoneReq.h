//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GetLandpageSmartPhoneReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long aid; // @dynamic aid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int compId; // @dynamic compId;
@property(retain, nonatomic) NSString *pageId; // @dynamic pageId;
@property(nonatomic) unsigned int sid; // @dynamic sid;
@property(retain, nonatomic) NSString *traceId; // @dynamic traceId;
@property(retain, nonatomic) NSString *uxinfo; // @dynamic uxinfo;

@end

