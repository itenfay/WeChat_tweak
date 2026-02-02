//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderObject, NSString;

@interface NewLifeMergeOrUpdateFeedReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *clientUdfKv; // @dynamic clientUdfKv;
@property(nonatomic) unsigned int enterScene; // @dynamic enterScene;
@property(nonatomic) _Bool isFakeObject; // @dynamic isFakeObject;
@property(retain, nonatomic) FinderObject *object; // @dynamic object;
@property(nonatomic) _Bool requestServer; // @dynamic requestServer;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

