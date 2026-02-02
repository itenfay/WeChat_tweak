//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface CheckOnlineOpenPalmServiceAuthReqBody : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int palmCaptureMode; // @dynamic palmCaptureMode;
@property(retain, nonatomic) NSString *phoneUuid; // @dynamic phoneUuid;
@property(retain, nonatomic) NSString *sdkVersion; // @dynamic sdkVersion;
@property(retain, nonatomic) NSString *sid; // @dynamic sid;

@end

