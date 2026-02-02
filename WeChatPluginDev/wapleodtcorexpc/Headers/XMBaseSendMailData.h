//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, XMBaseContactData;

@interface XMBaseSendMailData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *attlist; // @dynamic attlist;
@property(retain, nonatomic) NSMutableArray *bcclist; // @dynamic bcclist;
@property(retain, nonatomic) NSMutableArray *bigAttlist; // @dynamic bigAttlist;
@property(retain, nonatomic) NSMutableArray *cclist; // @dynamic cclist;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) XMBaseContactData *from; // @dynamic from;
@property(retain, nonatomic) NSString *oldmailid; // @dynamic oldmailid;
@property(nonatomic) _Bool savesent; // @dynamic savesent;
@property(nonatomic) int sendtype; // @dynamic sendtype;
@property(retain, nonatomic) NSString *subject; // @dynamic subject;
@property(retain, nonatomic) NSMutableArray *tolist; // @dynamic tolist;

@end

