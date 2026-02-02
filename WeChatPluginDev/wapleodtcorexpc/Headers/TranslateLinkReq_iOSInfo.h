//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface TranslateLinkReq_iOSInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bundleId; // @dynamic bundleId;
@property(nonatomic) unsigned int schemeFlag; // @dynamic schemeFlag;
@property(retain, nonatomic) NSString *sdkBundleId; // @dynamic sdkBundleId;
@property(retain, nonatomic) NSString *universalLink; // @dynamic universalLink;

@end

