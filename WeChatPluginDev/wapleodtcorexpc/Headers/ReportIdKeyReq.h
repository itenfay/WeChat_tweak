//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray;

@interface ReportIdKeyReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *datapkg; // @dynamic datapkg;
@property(retain, nonatomic) NSData *encryptkey; // @dynamic encryptkey;
@property(nonatomic) unsigned int genstgver; // @dynamic genstgver;
@property(nonatomic) unsigned int specstgver; // @dynamic specstgver;

@end

