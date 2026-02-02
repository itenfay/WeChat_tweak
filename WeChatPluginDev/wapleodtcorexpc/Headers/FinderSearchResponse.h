//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderSearchHotWord, FinderSearchSecurityTips, NSData, NSMutableArray, NSString;

@interface FinderSearchResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) FinderSearchHotWord *hotwordInfo; // @dynamic hotwordInfo;
@property(retain, nonatomic) NSMutableArray *infoList; // @dynamic infoList;
@property(retain, nonatomic) NSData *lastBuff; // @dynamic lastBuff;
@property(retain, nonatomic) NSMutableArray *multiFeedStream; // @dynamic multiFeedStream;
@property(nonatomic) unsigned int musicContinueFlag; // @dynamic musicContinueFlag;
@property(retain, nonatomic) NSMutableArray *musicInfoList; // @dynamic musicInfoList;
@property(nonatomic) unsigned int objectContinueFlag; // @dynamic objectContinueFlag;
@property(retain, nonatomic) NSMutableArray *objectList; // @dynamic objectList;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(retain, nonatomic) NSString *requsetId; // @dynamic requsetId;
@property(retain, nonatomic) FinderSearchSecurityTips *securityTips; // @dynamic securityTips;
@property(nonatomic) unsigned int topicContinueFlag; // @dynamic topicContinueFlag;
@property(retain, nonatomic) NSMutableArray *topicInfoList; // @dynamic topicInfoList;

@end

