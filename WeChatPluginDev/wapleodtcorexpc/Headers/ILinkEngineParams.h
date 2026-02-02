//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ILinkEngineParams : NSObject
{
    _Bool _isDebug;
    unsigned int _audioType;
    unsigned int _videoRatio;
    unsigned int _videoLength;
    NSString *_appId;
    NSString *_subAppId;
    NSString *_sessionKey;
    NSString *_idcInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDebug; // @synthesize isDebug=_isDebug;
@property(nonatomic) unsigned int videoLength; // @synthesize videoLength=_videoLength;
@property(nonatomic) unsigned int videoRatio; // @synthesize videoRatio=_videoRatio;
@property(nonatomic) unsigned int audioType; // @synthesize audioType=_audioType;
@property(copy, nonatomic) NSString *idcInfo; // @synthesize idcInfo=_idcInfo;
@property(copy, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
@property(copy, nonatomic) NSString *subAppId; // @synthesize subAppId=_subAppId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;

@end

