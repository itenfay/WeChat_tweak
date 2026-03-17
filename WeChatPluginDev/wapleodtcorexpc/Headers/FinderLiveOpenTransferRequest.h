//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, FinderBaseRequest, FinderLiveOpenBaseRequest, NSData, NSString;

@class WXPBGeneratedMessage;

@interface FinderLiveOpenTransferRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) FinderLiveOpenBaseRequest *finderLiveBasereq; // @dynamic finderLiveBasereq;
@property(retain, nonatomic) NSData *reqBuffer; // @dynamic reqBuffer;
@property(retain, nonatomic) NSString *reqJson; // @dynamic reqJson;

@end

