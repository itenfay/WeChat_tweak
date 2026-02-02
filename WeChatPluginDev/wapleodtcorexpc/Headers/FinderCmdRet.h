//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSData, NSString;

@class WXPBGeneratedMessage;

@interface FinderCmdRet : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int cmdId; // @dynamic cmdId;
@property(retain, nonatomic) NSData *retBuf; // @dynamic retBuf;
@property(nonatomic) int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;

@end

