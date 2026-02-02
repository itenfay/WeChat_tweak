//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface BatchGetAppMsgReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int listType; // @dynamic listType;
@property(retain, nonatomic) NSString *netType; // @dynamic netType;
@property(retain, nonatomic) NSMutableArray *reqInfoList; // @dynamic reqInfoList;
@property(nonatomic) unsigned int stripPreloadNum; // @dynamic stripPreloadNum;
@property(nonatomic) unsigned long long tmplControlFlag; // @dynamic tmplControlFlag;
@property(retain, nonatomic) NSMutableArray *typeInfoList; // @dynamic typeInfoList;
@property(retain, nonatomic) NSMutableArray *urlList; // @dynamic urlList;

@end

