//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray, NSString, NewLifePostGuideInfo, NewLifePrefetchConf, NewLifeSearchStreamResult;

@interface NewLifeStreamResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) NSString *debugMessage; // @dynamic debugMessage;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) NSMutableArray *newlifeTabList; // @dynamic newlifeTabList;
@property(retain, nonatomic) NSMutableArray *object; // @dynamic object;
@property(retain, nonatomic) NewLifePrefetchConf *prefetchConf; // @dynamic prefetchConf;
@property(retain, nonatomic) NewLifeSearchStreamResult *searchResult; // @dynamic searchResult;
@property(retain, nonatomic) NewLifePostGuideInfo *topBarPostGuide; // @dynamic topBarPostGuide;

@end

