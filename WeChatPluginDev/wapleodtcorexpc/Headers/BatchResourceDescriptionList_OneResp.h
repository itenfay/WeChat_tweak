//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, ResourceDescriptionList;

@interface BatchResourceDescriptionList_OneResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *projectId; // @dynamic projectId;
@property(retain, nonatomic) ResourceDescriptionList *resp; // @dynamic resp;
@property(nonatomic) int ret; // @dynamic ret;

@end

