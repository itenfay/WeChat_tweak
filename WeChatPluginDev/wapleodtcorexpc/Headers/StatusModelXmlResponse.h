//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSString, StatusInfo;

@class WXPBGeneratedMessage;

@interface StatusModelXmlResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int errorCode; // @dynamic errorCode;
@property(retain, nonatomic) NSString *errorMsg; // @dynamic errorMsg;
@property(retain, nonatomic) StatusInfo *info; // @dynamic info;
@property(nonatomic) _Bool result; // @dynamic result;
@property(nonatomic) int type; // @dynamic type;

@end

