//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WXPBGeneratedMessage;

@interface WCFinderLiveActivityBaseCgi
{
    WXPBGeneratedMessage *_innerRequest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WXPBGeneratedMessage *innerRequest; // @synthesize innerRequest=_innerRequest;
- (void)finderLiveActivityCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetFinderLiveActivityCgiResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)callCommonErrorWithInnerResponse:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (id)innerResponseFromResponse:(id)arg1;
- (id)responseFromBuffer:(id)arg1;
- (id)initWithLiveTaskId:(id)arg1;

@end

