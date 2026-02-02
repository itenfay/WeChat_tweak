//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NSURLConnection, PublicWifiCache, UIViewController;
@protocol APProtalDelegate;

@interface APPortal
{
    NSString *ticket;
    NSString *authUrl;
    NSString *extend;
    int _retryCount;
    id <APProtalDelegate> _delegate;
    NSString *_tid;
    NSString *_openid;
    NSString *_appid;
    UIViewController *_viewController;
    NSURLConnection *_connection;
    NSURLConnection *_postConnection;
    NSURLConnection *_ping32BlackUrlConnection;
    PublicWifiCache *_acache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PublicWifiCache *acache; // @synthesize acache=_acache;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSURLConnection *ping32BlackUrlConnection; // @synthesize ping32BlackUrlConnection=_ping32BlackUrlConnection;
@property(retain, nonatomic) NSURLConnection *postConnection; // @synthesize postConnection=_postConnection;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *openid; // @synthesize openid=_openid;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) __weak id <APProtalDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopLoading;
- (void)startLoading;
@property(readonly, copy) NSString *description;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)didSuccess;
- (void)didStart;
- (void)cancel;
- (void)start;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

