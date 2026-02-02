//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderAdBaseRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int carrier; // @dynamic carrier;
@property(nonatomic) unsigned int connectType; // @dynamic connectType;
@property(retain, nonatomic) NSString *deviceInfo; // @dynamic deviceInfo;
@property(retain, nonatomic) NSString *userAgent; // @dynamic userAgent;
@property(retain, nonatomic) NSString *vangoghLibVersion; // @dynamic vangoghLibVersion;

@end

