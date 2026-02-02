//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, CardsHomePageList, NSString, SecEntranceCardList;

@interface GetCardsLayoutResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) CardsHomePageList *cardsHomePageList; // @dynamic cardsHomePageList;
@property(nonatomic) unsigned int homePageCardNum; // @dynamic homePageCardNum;
@property(retain, nonatomic) NSString *jsonRet; // @dynamic jsonRet;
@property(retain, nonatomic) NSString *layoutBuff; // @dynamic layoutBuff;
@property(retain, nonatomic) SecEntranceCardList *secEntranceCardList; // @dynamic secEntranceCardList;

@end

