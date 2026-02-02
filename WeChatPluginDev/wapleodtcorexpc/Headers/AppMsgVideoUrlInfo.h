//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface AppMsgVideoUrlInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int durationMs; // @dynamic durationMs;
@property(nonatomic) unsigned long long filesize; // @dynamic filesize;
@property(nonatomic) unsigned int formatId; // @dynamic formatId;
@property(nonatomic) unsigned int height; // @dynamic height;
@property(nonatomic) unsigned int totalRange; // @dynamic totalRange;
@property(nonatomic) unsigned int trafficPopupFlag; // @dynamic trafficPopupFlag;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(nonatomic) unsigned int videoQualityLevel; // @dynamic videoQualityLevel;
@property(retain, nonatomic) NSString *videoQualityWording; // @dynamic videoQualityWording;
@property(nonatomic) unsigned int width; // @dynamic width;

@end

