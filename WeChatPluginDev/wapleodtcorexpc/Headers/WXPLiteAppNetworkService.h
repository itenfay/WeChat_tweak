//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WXPNetworkServiceImpl;

@interface WXPLiteAppNetworkService : NSObject
{
    WXPNetworkServiceImpl *_networkService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WXPNetworkServiceImpl *networkService; // @synthesize networkService=_networkService;
- (void)onRequestCompleteWithErrType:(int)arg1 responseData:(id)arg2 extraInfo:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)onRequestError:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)request:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)getBaseRequest:(int)arg1;
- (id)init;

@end

