//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ActionLocation, BaseRequest, NSString;

@interface CancelQRPayRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ActionLocation *actionLocation; // @dynamic actionLocation;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *qrUuid; // @dynamic qrUuid;
@property(retain, nonatomic) NSString *reqKey; // @dynamic reqKey;

@end

