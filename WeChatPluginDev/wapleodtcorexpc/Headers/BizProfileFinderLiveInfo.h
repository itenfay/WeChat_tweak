//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BizProfileFinderLiveInfo_Media, NSString;

@interface BizProfileFinderLiveInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *authIconTypeStr; // @dynamic authIconTypeStr;
@property(retain, nonatomic) NSString *authIconUrl; // @dynamic authIconUrl;
@property(retain, nonatomic) NSString *category; // @dynamic category;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) NSString *exportId; // @dynamic exportId;
@property(nonatomic) unsigned int extFlag; // @dynamic extFlag;
@property(retain, nonatomic) NSString *finderNonceId; // @dynamic finderNonceId;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSString *headUrl; // @dynamic headUrl;
@property(retain, nonatomic) NSString *liveSourceTypeStr; // @dynamic liveSourceTypeStr;
@property(nonatomic) unsigned int liveStatus; // @dynamic liveStatus;
@property(retain, nonatomic) BizProfileFinderLiveInfo_Media *media; // @dynamic media;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;

@end

