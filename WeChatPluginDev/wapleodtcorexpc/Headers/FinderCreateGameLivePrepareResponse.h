//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, FinderCreateLiveWarnPage, NSString;

@class WXPBGeneratedMessage;

@interface FinderCreateGameLivePrepareResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *gameLivePrepareBuff; // @dynamic gameLivePrepareBuff;
@property(nonatomic) unsigned int noNeedRedirect; // @dynamic noNeedRedirect;
@property(nonatomic) _Bool notPassOpenidToGame; // @dynamic notPassOpenidToGame;
@property(retain, nonatomic) FinderCreateLiveWarnPage *warnPage; // @dynamic warnPage;

@end

