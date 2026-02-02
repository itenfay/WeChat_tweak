//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, XMBaseContactData, XMReadMailTips;

@interface XMBaseReadData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *bcclist; // @dynamic bcclist;
@property(retain, nonatomic) NSMutableArray *bigattachkist; // @dynamic bigattachkist;
@property(retain, nonatomic) NSMutableArray *cclist; // @dynamic cclist;
@property(retain, nonatomic) NSString *charset; // @dynamic charset;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) NSString *contenttype; // @dynamic contenttype;
@property(retain, nonatomic) NSString *datetime; // @dynamic datetime;
@property(retain, nonatomic) XMBaseContactData *fromaddr; // @dynamic fromaddr;
@property(retain, nonatomic) NSString *mailid; // @dynamic mailid;
@property(retain, nonatomic) NSMutableArray *normalattachlist; // @dynamic normalattachlist;
@property(nonatomic) unsigned int size; // @dynamic size;
@property(retain, nonatomic) NSString *subject; // @dynamic subject;
@property(retain, nonatomic) XMReadMailTips *tips; // @dynamic tips;
@property(retain, nonatomic) NSMutableArray *tolist; // @dynamic tolist;

@end

