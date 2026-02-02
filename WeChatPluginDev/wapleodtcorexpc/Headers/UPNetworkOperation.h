//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableData, NSURLConnection, NSURLResponse;

@interface UPNetworkOperation : NSObject
{
    NSURLConnection *_connection;
    NSURLResponse *_response;
    NSMutableData *_mutableData;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

+ (id)getConfig:(id)arg1 encTn:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSMutableData *mutableData; // @synthesize mutableData=_mutableData;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)setCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;

@end

