//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface UserCertInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *crtEntryDesc; // @dynamic crtEntryDesc;
@property(retain, nonatomic) NSString *crtEntryTitle; // @dynamic crtEntryTitle;
@property(retain, nonatomic) NSString *crtItemLogoUrl; // @dynamic crtItemLogoUrl;
@property(retain, nonatomic) NSMutableArray *crtList; // @dynamic crtList;
@property(retain, nonatomic) NSString *crtStatusName; // @dynamic crtStatusName;
@property(nonatomic) unsigned int isCrtInstall; // @dynamic isCrtInstall;
@property(nonatomic) unsigned int showCrtInfo; // @dynamic showCrtInfo;

@end

