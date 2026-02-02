//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, WarningTextInfo;

@interface WarningNotice : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int isShowNotice; // @dynamic isShowNotice;
@property(retain, nonatomic) NSString *lefticon; // @dynamic lefticon;
@property(retain, nonatomic) NSString *lefticonDark; // @dynamic lefticonDark;
@property(retain, nonatomic) NSString *righticon; // @dynamic righticon;
@property(retain, nonatomic) NSString *righticonDark; // @dynamic righticonDark;
@property(retain, nonatomic) NSString *textColor; // @dynamic textColor;
@property(retain, nonatomic) NSString *textDarkColor; // @dynamic textDarkColor;
@property(retain, nonatomic) WarningTextInfo *textInfo; // @dynamic textInfo;

@end

