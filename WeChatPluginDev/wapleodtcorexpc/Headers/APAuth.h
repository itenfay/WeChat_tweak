//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NSURLConnection;
@protocol APAuthDelegate;

@interface APAuth
{
    int _retryCount;
    id <APAuthDelegate> delegate;
    NSURLConnection *_connection;
}

+ (id)apAuthFromApBase:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <APAuthDelegate> delegate; // @synthesize delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)didFail:(_Bool)arg1;
- (void)didExpired;
- (void)didSuccess;
- (void)didStart;
- (id)currMac;
- (_Bool)isExpired;
- (_Bool)isFromCacheAndExpired;
- (_Bool)isFromCacheAndValid;
- (void)prepareForAuth;
- (_Bool)checkExpired;
- (void)logout;
- (void)cancel;
- (void)startWithMac:(id)arg1;
- (void)startIniOS9;
- (void)start;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

