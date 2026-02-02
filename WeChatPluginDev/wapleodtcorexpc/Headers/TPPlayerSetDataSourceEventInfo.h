//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TPPlayerSetDataSourceEventInfo : NSObject
{
    _Bool _useProxy;
    NSString *_url;
    long long _urlProtocol;
}

@property(nonatomic) long long urlProtocol; // @synthesize urlProtocol=_urlProtocol;
@property(nonatomic, getter=isUseProxy) _Bool useProxy; // @synthesize useProxy=_useProxy;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (id)init;

@end

