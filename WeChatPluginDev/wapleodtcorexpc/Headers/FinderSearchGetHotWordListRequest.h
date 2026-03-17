//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, FinderBaseRequest, NSData;

@class WXPBGeneratedMessage;

@interface FinderSearchGetHotWordListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSData *hotwordLastBuff; // @dynamic hotwordLastBuff;
@property(retain, nonatomic) NSData *hotwordSessionBuffer; // @dynamic hotwordSessionBuffer;
@property(retain, nonatomic) NSData *objHotwordInfoBuff; // @dynamic objHotwordInfoBuff;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

