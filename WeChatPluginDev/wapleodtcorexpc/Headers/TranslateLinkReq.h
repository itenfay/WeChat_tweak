//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AppmsgSignature3rd, BaseRequest, NSMutableArray, NSString, SdkFinderInfo, TranslateLinkReq_iOSInfo;

@interface TranslateLinkReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *androidInfo; // @dynamic androidInfo;
@property(retain, nonatomic) AppmsgSignature3rd *appmsgSignature3Rd; // @dynamic appmsgSignature3Rd;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SdkFinderInfo *finderInfo; // @dynamic finderInfo;
@property(retain, nonatomic) TranslateLinkReq_iOSInfo *iosInfo; // @dynamic iosInfo;
@property(retain, nonatomic) NSString *link; // @dynamic link;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sdkToken; // @dynamic sdkToken;
@property(retain, nonatomic) NSString *sdkVersion; // @dynamic sdkVersion;
@property(nonatomic) int verifyScene; // @dynamic verifyScene;
@property(nonatomic) int verifyTokenResult; // @dynamic verifyTokenResult;

@end

