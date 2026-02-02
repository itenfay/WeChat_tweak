//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableData, NSURLConnection, PublicWifiCache;
@protocol APCheckDelegate;

@interface APCheck
{
    int _wifiProtoType;
    id <APCheckDelegate> _delegate;
    PublicWifiCache *_aCache;
    NSURLConnection *_connection;
    NSMutableData *_respData;
    long long _pingStatusCode;
    long long _pingCostTimeStart;
}

+ (id)apCheckFromApBase:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long pingCostTimeStart; // @synthesize pingCostTimeStart=_pingCostTimeStart;
@property(nonatomic) long long pingStatusCode; // @synthesize pingStatusCode=_pingStatusCode;
@property(retain, nonatomic) NSMutableData *respData; // @synthesize respData=_respData;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) PublicWifiCache *aCache; // @synthesize aCache=_aCache;
@property(nonatomic) int wifiProtoType; // @synthesize wifiProtoType=_wifiProtoType;
@property(nonatomic) __weak id <APCheckDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)didFail;
- (void)didSuccess;
- (void)cancel;
- (void)initCache;
- (void)start;
- (id)description;
- (id)initWithSsid:(id)arg1 mac:(id)arg2 qrCode:(id)arg3 cache:(id)arg4 scene:(unsigned int)arg5 delegate:(id)arg6 sessionKey:(id)arg7 wifiProtoType:(int)arg8;
- (id)initWithSsid:(id)arg1 mac:(id)arg2 qrCode:(id)arg3 cache:(id)arg4 scene:(unsigned int)arg5 delegate:(id)arg6;
- (id)initWithSsid:(id)arg1 mac:(id)arg2 cache:(id)arg3 scene:(unsigned int)arg4 delegate:(id)arg5 wifiProtoType:(int)arg6;
- (_Bool)isFromCacheAndValid;
- (id)init;
- (void)dealloc;

@end

