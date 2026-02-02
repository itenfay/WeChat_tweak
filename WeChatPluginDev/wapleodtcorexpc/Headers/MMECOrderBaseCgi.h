//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, WXPBGeneratedMessage;

@interface MMECOrderBaseCgi
{
    _Bool _cancelTask;
    WXPBGeneratedMessage *_request;
    double _startTime;
    NSMutableSet *_baseProcessingToastErrorCodeSet;
}

+ (_Bool)shouldAutoProcessingToastWithErrorCode:(long long)arg1;
+ (id)baseProcessingToastErrorCodeSet;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *baseProcessingToastErrorCodeSet; // @synthesize baseProcessingToastErrorCodeSet=_baseProcessingToastErrorCodeSet;
@property(nonatomic, getter=isCancelTask) _Bool cancelTask; // @synthesize cancelTask=_cancelTask;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (id)request;
- (void)cancel;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)cgiIdKeyDict;
- (void)didGetResponse:(id)arg1;
- (void)orderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (_Bool)shouldAutoProcessingToastWithError:(id)arg1;
- (id)customSuccessfulRetCodeArray;
- (void)setRequest:(id)arg1;
- (void)start;

@end

