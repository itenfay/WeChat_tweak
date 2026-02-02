//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TRTCPublishCDNParam : NSObject
{
    int _appId;
    int _bizId;
    NSString *_url;
    NSString *_streamId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) int bizId; // @synthesize bizId=_bizId;
@property(nonatomic) int appId; // @synthesize appId=_appId;
- (id)init;
- (struct ThirdPartyCdnConfig)convertToCppParams;

@end

