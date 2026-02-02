//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OpenApiVideoFileMsgParam : NSObject
{
    NSString *_appId;
    long long _maxVideoTime;
    NSString *_videoCompressParams;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *videoCompressParams; // @synthesize videoCompressParams=_videoCompressParams;
@property(nonatomic) long long maxVideoTime; // @synthesize maxVideoTime=_maxVideoTime;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;

@end

