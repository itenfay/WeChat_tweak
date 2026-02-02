//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface JSScopeAuthInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *apiname; // @dynamic apiname;
@property(retain, nonatomic) NSString *scope; // @dynamic scope;
@property(retain, nonatomic) NSString *scopeDesc; // @dynamic scopeDesc;
@property(nonatomic) unsigned int scopeStatus; // @dynamic scopeStatus;

@end

