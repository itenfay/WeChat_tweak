//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSURLProtocol.h>

@class NSMutableData, NSString, NSURLRequest, NSURLSession;
@protocol NSURLProtocolClient, WKURLSchemeTask;

@interface WebpUrlProtocol : NSURLProtocol
{
    _Bool _cancel;
    id <WKURLSchemeTask> _schemeTask;
    NSURLRequest *_originRequest;
    NSURLRequest *_realRequest;
    id <NSURLProtocolClient> _realClient;
    NSURLSession *_session;
    NSMutableData *_imageData;
    double _timeDownload;
    double _timeDecode;
    double _timeFinish;
}

+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (_Bool)isWebpUrlRequest:(id)arg1;
+ (void)wa_web_unregisterWebpScheme;
+ (void)wa_web_registerWebpScheme;
- (void).cxx_destruct;
@property(nonatomic) _Bool cancel; // @synthesize cancel=_cancel;
@property(nonatomic) double timeFinish; // @synthesize timeFinish=_timeFinish;
@property(nonatomic) double timeDecode; // @synthesize timeDecode=_timeDecode;
@property(nonatomic) double timeDownload; // @synthesize timeDownload=_timeDownload;
@property(retain, nonatomic) NSMutableData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <NSURLProtocolClient> realClient; // @synthesize realClient=_realClient;
@property(copy, nonatomic) NSURLRequest *realRequest; // @synthesize realRequest=_realRequest;
@property(copy, nonatomic) NSURLRequest *originRequest; // @synthesize originRequest=_originRequest;
@property(retain, nonatomic) id <WKURLSchemeTask> schemeTask; // @synthesize schemeTask=_schemeTask;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)responseData:(id)arg1;
- (void)stopLoading;
- (void)innerLoading;
- (void)startLoading;
- (void)startLoadingBySchemeTask:(id)arg1 client:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

