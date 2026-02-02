//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface GetWxaDebugInfoResp_ModuleItem_ModuleInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *checkSumMd5; // @dynamic checkSumMd5;
@property(retain, nonatomic) NSString *downloadUrl; // @dynamic downloadUrl;
@property(nonatomic) _Bool independent; // @dynamic independent;
@property(nonatomic) unsigned int index; // @dynamic index;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) unsigned int sourceSize; // @dynamic sourceSize;
@property(retain, nonatomic) NSMutableArray *widgetList; // @dynamic widgetList;
@property(retain, nonatomic) NSString *withoutLibMd5; // @dynamic withoutLibMd5;

@end

