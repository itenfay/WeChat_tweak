//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LiteAppAssetView, MMAsset, NSString, NSURL;

@interface LiteAppAssetInfo : NSObject
{
    NSURL *m_assetUrl;
    _Bool _bShowInfo;
    _Bool _bPreSelect;
    int _index;
    MMAsset *_asset;
    NSString *_albumId;
    unsigned long long _originLimitSize;
    unsigned long long _limitFileSize;
    unsigned long long _fileSize;
    double _duration;
    LiteAppAssetView *_assetView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak LiteAppAssetView *assetView; // @synthesize assetView=_assetView;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) unsigned long long limitFileSize; // @synthesize limitFileSize=_limitFileSize;
@property(nonatomic) unsigned long long originLimitSize; // @synthesize originLimitSize=_originLimitSize;
@property(nonatomic) _Bool bPreSelect; // @synthesize bPreSelect=_bPreSelect;
@property(nonatomic) _Bool bShowInfo; // @synthesize bShowInfo=_bShowInfo;
@property(readonly, nonatomic) int index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *albumId; // @synthesize albumId=_albumId;
@property(readonly, nonatomic) MMAsset *asset; // @synthesize asset=_asset;
- (void)showOriginSizeLimitAlert;
- (_Bool)isExceededFileSizeLimit;
- (id)getOriginSizeLimitAlertContent;
- (_Bool)isExceededOriginFileSizeLimit;
- (unsigned long long)editedFileSize;
- (void)asyncAssetSize:(CDUnknownBlockType)arg1;
- (void)asyncAssetDuration:(CDUnknownBlockType)arg1;
- (long long)compareAssetInfo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSURL *url;
- (id)initWithAsset:(id)arg1 forIndex:(int)arg2;

@end

