//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMKCgi : NSObject
{
    struct Handle<std::shared_ptr<kinda::KCgi>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onResp:(int)arg1 responseData:(id)arg2 extraInfo:(id)arg3;
- (long long)getNewDNSBusinessType;
- (id)getRouteInfo;
- (_Bool)getNeedNotify;
- (id)getRequestData;
- (int)getRetryCount;
- (int)getTimeout;
- (int)getChannelType;
- (id)getCgiUrl;
- (int)getCgiId;
- (id)initWithCpp:(const void *)arg1;

@end

