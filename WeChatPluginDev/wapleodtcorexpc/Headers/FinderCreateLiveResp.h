//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderCreateLiveWarnPage, FinderLiveAdInfo, FinderLiveErrorPage, FinderObject, NSString;

@interface FinderCreateLiveResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned long long bulletinSeq; // @dynamic bulletinSeq;
@property(retain, nonatomic) FinderLiveErrorPage *errorPage; // @dynamic errorPage;
@property(retain, nonatomic) FinderLiveAdInfo *liveAdInfo; // @dynamic liveAdInfo;
@property(retain, nonatomic) FinderObject *liveObject; // @dynamic liveObject;
@property(retain, nonatomic) NSString *realnameUrl; // @dynamic realnameUrl;
@property(retain, nonatomic) FinderCreateLiveWarnPage *warnPage; // @dynamic warnPage;

@end

