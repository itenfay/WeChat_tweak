//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImage;

@interface MMCDNImageView
{
    UIImage *_defaultImage;
    NSString *_localSrcPath;
    NSString *_cdnUrl;
    NSString *_aesKey;
    unsigned long long _datasize;
    NSString *_clientID;
    unsigned int _fileType;
    _Bool _isCompressImage;
    _Bool _isloaded;
    _Bool _autoDownloadNoWifi;
    _Bool _isClipImage;
    _Bool _isFromC2C;
    NSString *_localSrcTmpPath;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFromC2C; // @synthesize isFromC2C=_isFromC2C;
@property(nonatomic) _Bool isClipImage; // @synthesize isClipImage=_isClipImage;
@property(nonatomic) _Bool autoDownloadNoWifi; // @synthesize autoDownloadNoWifi=_autoDownloadNoWifi;
@property(nonatomic) _Bool isCompressImage; // @synthesize isCompressImage=_isCompressImage;
@property(nonatomic) unsigned int fileType; // @synthesize fileType=_fileType;
@property(nonatomic) unsigned long long dataSize; // @synthesize dataSize=_datasize;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl=_cdnUrl;
@property(retain, nonatomic) NSString *localSrcPath; // @synthesize localSrcPath=_localSrcPath;
- (void)OnCdnDownload:(id)arg1;
- (void)stopLoadingImage;
- (_Bool)startLoadingImage;
- (void)loadingImageWithGCD;
- (id)clipImage:(id)arg1 withData:(id)arg2;
- (id)compressImage:(id)arg1;
- (void)setDefaultImage:(id)arg1;

@end

