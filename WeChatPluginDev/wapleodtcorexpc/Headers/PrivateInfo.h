//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface PrivateInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long version; // @dynamic version;
@property(retain, nonatomic) NSMutableArray *whitelistLabels; // @dynamic whitelistLabels;
@property(retain, nonatomic) NSMutableArray *whitelistUsernames; // @dynamic whitelistUsernames;

@end

