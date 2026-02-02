//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMKNetworkMockManager : NSObject
{
    struct Handle<std::shared_ptr<kinda::KNetworkMockManager>> _cppRefHandle;
}

+ (id)getCgiList;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)jsonToRequestData:(id)arg1;
- (id)jsonToResponseData:(id)arg1;
- (id)responseDataToJson:(id)arg1;
- (id)requestDataToJson:(id)arg1;
- (id)initWithCpp:(const void *)arg1;

@end

