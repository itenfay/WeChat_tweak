//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface GetWxaDebugInfoResp_PkgInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long bufId; // @dynamic bufId;
@property(nonatomic) unsigned int packageType; // @dynamic packageType;
@property(retain, nonatomic) NSMutableArray *separatedPluginList; // @dynamic separatedPluginList;
@property(retain, nonatomic) NSString *wxapkgMd5; // @dynamic wxapkgMd5;
@property(nonatomic) unsigned int wxapkgSize; // @dynamic wxapkgSize;

@end

