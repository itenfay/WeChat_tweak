//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FavoritesDownloadCDNInfo : NSObject
{
    _Bool _isThumb;
    unsigned int _localItemId;
    int _dataType;
    NSString *_favItemChectId;
    NSString *_localDataID;
    unsigned long long _size;
    NSString *_cdnUrl;
    NSString *_cdnKey;
    NSString *_md5;
    NSString *_head256Md5;
    NSString *_dataFmt;
    NSString *_streamWebUrl;
}

+ (id)CreatFavDownloadCDNInfoForData:(id)arg1 inFavItem:(id)arg2 isThumb:(_Bool)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *streamWebUrl; // @synthesize streamWebUrl=_streamWebUrl;
@property(retain, nonatomic) NSString *dataFmt; // @synthesize dataFmt=_dataFmt;
@property(nonatomic) int dataType; // @synthesize dataType=_dataType;
@property(nonatomic) _Bool isThumb; // @synthesize isThumb=_isThumb;
@property(retain, nonatomic) NSString *head256Md5; // @synthesize head256Md5=_head256Md5;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *cdnKey; // @synthesize cdnKey=_cdnKey;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl=_cdnUrl;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *localDataID; // @synthesize localDataID=_localDataID;
@property(retain, nonatomic) NSString *favItemChectId; // @synthesize favItemChectId=_favItemChectId;
@property(nonatomic) unsigned int localItemId; // @synthesize localItemId=_localItemId;

@end

