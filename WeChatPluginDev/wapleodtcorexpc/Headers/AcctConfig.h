//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface AcctConfig : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionType; // @dynamic actionType;
@property(retain, nonatomic) NSString *cellDetail; // @dynamic cellDetail;
@property(retain, nonatomic) NSString *cellName; // @dynamic cellName;
@property(retain, nonatomic) NSString *miniappPath; // @dynamic miniappPath;
@property(nonatomic) unsigned int miniappScene; // @dynamic miniappScene;
@property(retain, nonatomic) NSString *miniappUsername; // @dynamic miniappUsername;
@property(retain, nonatomic) NSString *webUrl; // @dynamic webUrl;

@end

