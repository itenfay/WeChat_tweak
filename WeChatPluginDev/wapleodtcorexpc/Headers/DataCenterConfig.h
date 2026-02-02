//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface DataCenterConfig : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool enable; // @dynamic enable;
@property(retain, nonatomic) NSString *miniappPath; // @dynamic miniappPath;
@property(retain, nonatomic) NSString *miniappUsername; // @dynamic miniappUsername;
@property(nonatomic) unsigned int portType; // @dynamic portType;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *webUrl; // @dynamic webUrl;

@end

