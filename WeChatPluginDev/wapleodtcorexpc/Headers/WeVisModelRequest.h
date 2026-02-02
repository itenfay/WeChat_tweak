//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface WeVisModelRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int ffeversion; // @dynamic ffeversion;
@property(retain, nonatomic) NSMutableArray *localConfigList; // @dynamic localConfigList;
@property(nonatomic) unsigned int mediaanalysisversion; // @dynamic mediaanalysisversion;
@property(retain, nonatomic) NSString *phonemodel; // @dynamic phonemodel;
@property(nonatomic) unsigned int sdkversion; // @dynamic sdkversion;

@end

