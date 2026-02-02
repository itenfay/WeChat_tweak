//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface AdAntiAbuseReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *adExtInfo; // @dynamic adExtInfo;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *canvasDynamicInfo; // @dynamic canvasDynamicInfo;
@property(retain, nonatomic) NSString *canvasId; // @dynamic canvasId;
@property(nonatomic) unsigned int enterScene; // @dynamic enterScene;
@property(nonatomic) unsigned long long localCacheTime; // @dynamic localCacheTime;
@property(retain, nonatomic) NSString *pageId; // @dynamic pageId;
@property(retain, nonatomic) NSString *uxInfo; // @dynamic uxInfo;

@end

