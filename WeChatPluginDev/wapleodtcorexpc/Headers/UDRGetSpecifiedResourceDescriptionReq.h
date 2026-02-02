//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface UDRGetSpecifiedResourceDescriptionReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *projectId; // @dynamic projectId;
@property(retain, nonatomic) NSString *resourceName; // @dynamic resourceName;
@property(nonatomic) unsigned int resourceVersion; // @dynamic resourceVersion;

@end

