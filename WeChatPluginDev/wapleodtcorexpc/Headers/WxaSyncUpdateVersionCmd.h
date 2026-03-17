//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class WxaSyncBaseCmd;

@class WXPBGeneratedMessage;

@interface WxaSyncUpdateVersionCmd : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WxaSyncBaseCmd *base; // @dynamic base;
@property(nonatomic) unsigned int lastVersion; // @dynamic lastVersion;
@property(nonatomic) unsigned int launchFallbackDirectlyMinVersion; // @dynamic launchFallbackDirectlyMinVersion;

@end

