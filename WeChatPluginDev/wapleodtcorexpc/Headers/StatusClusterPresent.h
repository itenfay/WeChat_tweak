//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface StatusClusterPresent : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int characterSetType; // @dynamic characterSetType;
@property(retain, nonatomic) NSString *clusterId; // @dynamic clusterId;
@property(retain, nonatomic) NSString *clusterPresentType; // @dynamic clusterPresentType;
@property(nonatomic) unsigned int clusterPresentVersion; // @dynamic clusterPresentVersion;
@property(retain, nonatomic) NSMutableArray *iconActions; // @dynamic iconActions;
@property(retain, nonatomic) NSString *iconId; // @dynamic iconId;

@end

