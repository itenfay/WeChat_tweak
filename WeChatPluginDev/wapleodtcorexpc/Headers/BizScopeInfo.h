//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface BizScopeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int apiCount; // @dynamic apiCount;
@property(retain, nonatomic) NSMutableArray *apiList; // @dynamic apiList;
@property(retain, nonatomic) NSString *scope; // @dynamic scope;
@property(retain, nonatomic) NSString *scopeDesc; // @dynamic scopeDesc;
@property(nonatomic) unsigned int scopeStatus; // @dynamic scopeStatus;

@end

