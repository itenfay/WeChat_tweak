//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderClientStatus, NSData, NSString;

@interface FinderCatelogStreamRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *extBuff; // @dynamic extBuff;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) unsigned int pullType; // @dynamic pullType;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) FinderClientStatus *status; // @dynamic status;
@property(nonatomic) unsigned int tabType; // @dynamic tabType;

@end

