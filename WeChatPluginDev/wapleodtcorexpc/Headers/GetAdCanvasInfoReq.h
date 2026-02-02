//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GetAdCanvasInfoReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *canvasDynamicInfo; // @dynamic canvasDynamicInfo;
@property(nonatomic) unsigned int enterScene; // @dynamic enterScene;
@property(nonatomic) unsigned long long pageId; // @dynamic pageId;
@property(retain, nonatomic) NSString *supportCapability; // @dynamic supportCapability;
@property(retain, nonatomic) NSString *uxInfo; // @dynamic uxInfo;
@property(retain, nonatomic) NSString *vangoghLibVersion; // @dynamic vangoghLibVersion;

@end

