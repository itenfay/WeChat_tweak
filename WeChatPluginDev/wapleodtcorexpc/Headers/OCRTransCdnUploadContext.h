//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OCRTransCdnUploadContext : NSObject
{
    unsigned int _cgiType;
    unsigned int _sessionId32;
    unsigned int _scene;
    unsigned int _imageDataLength;
    unsigned int _cdnEventID;
    unsigned long long _sessionId64;
}

@property(nonatomic) unsigned int cdnEventID; // @synthesize cdnEventID=_cdnEventID;
@property(nonatomic) unsigned int imageDataLength; // @synthesize imageDataLength=_imageDataLength;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long sessionId64; // @synthesize sessionId64=_sessionId64;
@property(nonatomic) unsigned int sessionId32; // @synthesize sessionId32=_sessionId32;
@property(nonatomic) unsigned int cgiType; // @synthesize cgiType=_cgiType;

@end

