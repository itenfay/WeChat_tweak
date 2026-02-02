//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface GameSimpleDnsControl : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool disable; // @dynamic disable;
@property(nonatomic) _Bool disableWeakNetUse; // @dynamic disableWeakNetUse;
@property(retain, nonatomic) NSMutableArray *domainWhiteList; // @dynamic domainWhiteList;
@property(nonatomic) _Bool forceSimpleDns; // @dynamic forceSimpleDns;

@end

