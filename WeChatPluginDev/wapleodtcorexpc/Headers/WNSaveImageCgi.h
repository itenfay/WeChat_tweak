//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface WNSaveImageCgi
{
    unsigned int _curVersion;
    NSMutableArray *_fontInfoList;
    NSMutableArray *_backGroundInfoList;
    NSMutableArray *_arrFontInfos;
    NSMutableArray *_arrBkgImageInfos;
    unsigned long long _fontInfosCount;
    unsigned long long _imageInfosCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long imageInfosCount; // @synthesize imageInfosCount=_imageInfosCount;
@property(nonatomic) unsigned long long fontInfosCount; // @synthesize fontInfosCount=_fontInfosCount;
@property(nonatomic) unsigned int curVersion; // @synthesize curVersion=_curVersion;
@property(retain, nonatomic) NSMutableArray *arrBkgImageInfos; // @synthesize arrBkgImageInfos=_arrBkgImageInfos;
@property(retain, nonatomic) NSMutableArray *arrFontInfos; // @synthesize arrFontInfos=_arrFontInfos;
@property(retain, nonatomic) NSMutableArray *backGroundInfoList; // @synthesize backGroundInfoList=_backGroundInfoList;
@property(retain, nonatomic) NSMutableArray *fontInfoList; // @synthesize fontInfoList=_fontInfoList;
- (id)getWNBkgImageInfoArr;
- (id)getWNFontInfoArr;
- (void)encodeResources:(id)arg1 toFilePath:(id)arg2;
- (id)decodeBkgImageResourcesFromFile;
- (id)decodeFontResourcesFromFile;
- (void)generateWNBkgImageInfo;
- (void)downloadFont:(id)arg1;
- (void)checkDownLoadQueue;
- (void)clearCache;
- (void)handleMessageReturnWithResponse:(id)arg1;
- (void)onReturnNoNeedDownload;
- (void)onReturnSuccess;
- (void)onReturnError;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startRequest;
- (id)init;

@end

