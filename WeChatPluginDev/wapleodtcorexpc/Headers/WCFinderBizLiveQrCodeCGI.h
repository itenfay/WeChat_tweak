//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface WCFinderBizLiveQrCodeCGI : NSObject
{
    CDUnknownBlockType _successCompletion;
    CDUnknownBlockType _failedCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType failedCompletion; // @synthesize failedCompletion=_failedCompletion;
@property(copy, nonatomic) CDUnknownBlockType successCompletion; // @synthesize successCompletion=_successCompletion;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithUrl:(id)arg1 successCompletion:(CDUnknownBlockType)arg2 failedCompletion:(CDUnknownBlockType)arg3;

@end
