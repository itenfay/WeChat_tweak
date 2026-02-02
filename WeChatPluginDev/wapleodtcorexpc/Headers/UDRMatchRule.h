//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, UDRCommonRules;

@interface UDRMatchRule : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) UDRCommonRules *appRules; // @dynamic appRules;
@property(retain, nonatomic) UDRCommonRules *projectRules; // @dynamic projectRules;
@property(retain, nonatomic) UDRCommonRules *resourceRules; // @dynamic resourceRules;
@property(retain, nonatomic) NSData *systemRules; // @dynamic systemRules;

@end

