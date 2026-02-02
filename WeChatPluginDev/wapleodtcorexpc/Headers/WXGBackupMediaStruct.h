//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WXGBackupMediaStruct : NSObject
{
    int _mediaType;
    long long _createTime;
    long long _msgSvrID;
    unsigned long long _mediaSize;
    NSString *_mediaPath;
    NSString *_mediaID;
    NSString *_md5;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(retain, nonatomic) NSString *mediaPath; // @synthesize mediaPath=_mediaPath;
@property(nonatomic) unsigned long long mediaSize; // @synthesize mediaSize=_mediaSize;
@property(nonatomic) long long msgSvrID; // @synthesize msgSvrID=_msgSvrID;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;

@end

