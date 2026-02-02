//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPCdnUrlInfo : NSObject
{
    NSString *_url;
    NSString *_uIp;
    NSString *_cdnIp;
    NSString *_errorStr;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *errorStr; // @synthesize errorStr=_errorStr;
@property(readonly, nonatomic) NSString *cdnIp; // @synthesize cdnIp=_cdnIp;
@property(readonly, nonatomic) NSString *uIp; // @synthesize uIp=_uIp;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
- (id)initWithUrl:(id)arg1 uIp:(id)arg2 cdnIp:(id)arg3 errorStr:(id)arg4;

@end

