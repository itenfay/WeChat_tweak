//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class SKBuiltinString_t, SnsObject;

@interface SnsADObject : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinString_t *adxml; // @dynamic adxml;
@property(retain, nonatomic) SKBuiltinString_t *dynamicAdInfoXml; // @dynamic dynamicAdInfoXml;
@property(retain, nonatomic) SKBuiltinString_t *dynamicAdXml; // @dynamic dynamicAdXml;
@property(retain, nonatomic) SKBuiltinString_t *dynamicTimelineObjXml; // @dynamic dynamicTimelineObjXml;
@property(retain, nonatomic) SnsObject *snsObject; // @dynamic snsObject;

@end

