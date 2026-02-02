//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSError, NSString, NSURLConnection;

@interface QBSpeedItem : NSObject
{
    NSURLConnection *_connection;
    double _startTime;
    CDUnknownBlockType _completionBlock;
    NSString *_hostString;
    double _duration;
    NSError *_errorInfo;
}

@property(retain, nonatomic) NSError *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *hostString; // @synthesize hostString=_hostString;
- (void).cxx_destruct;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)notifyFinished;
- (void)markFinished;
- (void)cancel;
- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithHostString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

