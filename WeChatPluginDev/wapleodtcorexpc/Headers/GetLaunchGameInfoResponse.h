//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AppStoreInfo, BaseResponse, GameItem, GetLiteAppInfo, GetWebViewInfo, NSString;

@interface GetLaunchGameInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionType; // @dynamic actionType;
@property(retain, nonatomic) AppStoreInfo *appStore; // @dynamic appStore;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *errMsg; // @dynamic errMsg;
@property(retain, nonatomic) GameItem *gameInfo; // @dynamic gameInfo;
@property(retain, nonatomic) GetLiteAppInfo *liteApp; // @dynamic liteApp;
@property(retain, nonatomic) GetWebViewInfo *webview; // @dynamic webview;

@end

