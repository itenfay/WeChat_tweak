//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableData, NSMutableURLRequest, NSString, NSURLConnection, QBBeaconReqDataPackage;

@interface QBBeaconNetRequest : NSObject
{
    int priority;
    NSString *serverUrl;
    QBBeaconReqDataPackage *reqDataPkg;
    NSURLConnection *urlConnection;
    NSMutableURLRequest *request;
    NSData *retryPostData;
    NSMutableData *rspData;
    NSString *sessionId;
    id delegate;
}

+ (id)defaultQueue;
@property(retain, nonatomic) NSData *retryPostData; // @synthesize retryPostData;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId;
@property(retain, nonatomic) NSMutableData *rspData; // @synthesize rspData;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request;
@property(retain, nonatomic) NSURLConnection *urlConnection; // @synthesize urlConnection;
@property(nonatomic) id delegate; // @synthesize delegate;
@property(retain, nonatomic) QBBeaconReqDataPackage *reqDataPkg; // @synthesize reqDataPkg;
@property(retain, nonatomic) NSString *serverUrl; // @synthesize serverUrl;
@property(nonatomic) int priority; // @synthesize priority;
- (void).cxx_destruct;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)doSuccessOperation:(id)arg1;
- (void)doFailOperation:(id)arg1;
- (void)_startAsync;
- (void)dealloc;
- (id)init;
- (void)reqFinished;
- (void)startAsync;

@end

