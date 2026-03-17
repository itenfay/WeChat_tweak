//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSString;

@class WXPBGeneratedMessage;

@interface PublicLibUpdateInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int forceUpdate; // @dynamic forceUpdate;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(nonatomic) _Bool needUpdate; // @dynamic needUpdate;
@property(retain, nonatomic) NSString *patchUrl; // @dynamic patchUrl;
@property(nonatomic) _Bool relyUpdate; // @dynamic relyUpdate;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(nonatomic) unsigned int version; // @dynamic version;

@end

