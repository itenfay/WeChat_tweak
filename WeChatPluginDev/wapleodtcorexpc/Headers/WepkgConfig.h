//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface WepkgConfig : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int checkIntervalSeconds; // @dynamic checkIntervalSeconds;
@property(retain, nonatomic) NSString *currentEnabledVersion; // @dynamic currentEnabledVersion;
@property(nonatomic) _Bool disableWebViewGlobalCache; // @dynamic disableWebViewGlobalCache;
@property(nonatomic) unsigned int pkgVersionLastUnusedSeconds; // @dynamic pkgVersionLastUnusedSeconds;

@end

