//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderOriginalDesc, NSString;

@interface FinderModFeedSetting : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *exportId; // @dynamic exportId;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) unsigned long long objectid; // @dynamic objectid;
@property(nonatomic) unsigned int optype; // @dynamic optype;
@property(retain, nonatomic) FinderOriginalDesc *originalInfoDesc; // @dynamic originalInfoDesc;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

