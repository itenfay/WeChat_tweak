//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MPGetSystemInfoImpl;

@interface MPEventHandler_getSystemInfoAsync : NSObject
{
    MPGetSystemInfoImpl *_impl;
}

@property(retain, nonatomic) MPGetSystemInfoImpl *impl; // @synthesize impl=_impl;
- (void)invoke:(id)arg1;
- (id)apiName;
- (id)init;

@end

