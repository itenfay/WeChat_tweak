//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WXPLiteAppBaseCgi
{
    _Bool _needNotify;
    int _cgiId;
    int _channelType;
    int _timeout;
    int _retryCount;
    CDUnknownBlockType _callback;
    NSString *_cgiUrl;
    NSData *_requestData;
    NSString *_routeInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *routeInfo; // @synthesize routeInfo=_routeInfo;
@property(nonatomic) _Bool needNotify; // @synthesize needNotify=_needNotify;
@property(retain, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) int timeout; // @synthesize timeout=_timeout;
@property(nonatomic) int channelType; // @synthesize channelType=_channelType;
@property(retain, nonatomic) NSString *cgiUrl; // @synthesize cgiUrl=_cgiUrl;
@property(nonatomic) int cgiId; // @synthesize cgiId=_cgiId;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void)onResp:(int)arg1 responseData:(id)arg2 extraInfo:(id)arg3;
- (long long)getNewDNSBusinessType;
- (id)getRouteInfo;
- (_Bool)getNeedNotify;
- (id)getRequestData;
- (int)getRetryCount;
- (int)getTimeout;
- (int)getChannelType;
- (id)getCgiUrl;
- (int)getCgiId;
- (id)initWithConfig:(id)arg1 data:(id)arg2 error:(id *)arg3;

@end

