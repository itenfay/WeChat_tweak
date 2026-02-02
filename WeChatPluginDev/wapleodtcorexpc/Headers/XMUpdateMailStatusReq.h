//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface XMUpdateMailStatusReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long flag; // @dynamic flag;
@property(retain, nonatomic) NSMutableArray *mailids; // @dynamic mailids;
@property(nonatomic) unsigned long long uin; // @dynamic uin;

@end

