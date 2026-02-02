//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface GetExposeLinkRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *exposeDetail; // @dynamic exposeDetail;
@property(retain, nonatomic) NSString *exposeUserName; // @dynamic exposeUserName;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *snsId; // @dynamic snsId;
@property(nonatomic) unsigned int typeId; // @dynamic typeId;

@end

