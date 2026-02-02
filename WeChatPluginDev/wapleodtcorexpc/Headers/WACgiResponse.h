//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WACgiProfileInfo, WACgiRequest, WXPBGeneratedMessage, WxaRuntimeLoginTransferResp;

@interface WACgiResponse : NSObject
{
    unsigned int _uiMessage;
    int _stnErrCode;
    int _stnErrType;
    WACgiRequest *_cgiRequest;
    WXPBGeneratedMessage *_pbResponse;
    WxaRuntimeLoginTransferResp *_transferResponse;
    WACgiProfileInfo *_cgiProfile;
}

+ (id)responseFrom:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int stnErrType; // @synthesize stnErrType=_stnErrType;
@property(nonatomic) int stnErrCode; // @synthesize stnErrCode=_stnErrCode;
@property(retain, nonatomic) WACgiProfileInfo *cgiProfile; // @synthesize cgiProfile=_cgiProfile;
@property(retain, nonatomic) WxaRuntimeLoginTransferResp *transferResponse; // @synthesize transferResponse=_transferResponse;
@property(retain, nonatomic) WXPBGeneratedMessage *pbResponse; // @synthesize pbResponse=_pbResponse;
@property(nonatomic) unsigned int uiMessage; // @synthesize uiMessage=_uiMessage;
@property(retain, nonatomic) WACgiRequest *cgiRequest; // @synthesize cgiRequest=_cgiRequest;

@end

