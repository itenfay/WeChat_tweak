//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WAAppBrandNotifyLoadingImgInfo, WAAppBrandNotifyModuleInfo;

@interface WAAppBrandNotifyInfo : NSObject
{
    _Bool _isAlreadyDownload;
    unsigned int _type;
    unsigned int _debugStartTime;
    unsigned int _debugEndTime;
    unsigned int _from;
    unsigned int _debugDevKey;
    NSString *_appid;
    NSString *_username;
    NSString *_debugURL;
    NSString *_checkSum;
    WAAppBrandNotifyModuleInfo *_moduleInfo;
    NSString *_deviceOrientation;
    WAAppBrandNotifyLoadingImgInfo *_loadingImgInfo;
    NSString *_clientJsExtInfoString;
    NSString *_withoutLibMd5;
    NSMutableArray *_arrPluginCodeInfo;
    NSString *_withoutLibUrl;
    NSMutableArray *_arrWidgetInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_arrWidgetInfo;
+ (void)PBArrayAdd_withoutLibUrl;
+ (void)PBArrayAdd_arrPluginCodeInfo;
+ (void)PBArrayAdd_withoutLibMd5;
+ (void)PBArrayAdd_loadingImgInfo;
+ (void)PBArrayAdd_clientJsExtInfoString;
+ (void)PBArrayAdd_deviceOrientation;
+ (void)PBArrayAdd_debugDevKey;
+ (void)PBArrayAdd_moduleInfo;
+ (void)PBArrayAdd_from;
+ (void)PBArrayAdd_checkSum;
+ (void)PBArrayAdd_isAlreadyDownload;
+ (void)PBArrayAdd_debugEndTime;
+ (void)PBArrayAdd_debugStartTime;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_debugURL;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_appid;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrWidgetInfo; // @synthesize arrWidgetInfo=_arrWidgetInfo;
@property(retain, nonatomic) NSString *withoutLibUrl; // @synthesize withoutLibUrl=_withoutLibUrl;
@property(retain, nonatomic) NSMutableArray *arrPluginCodeInfo; // @synthesize arrPluginCodeInfo=_arrPluginCodeInfo;
@property(retain, nonatomic) NSString *withoutLibMd5; // @synthesize withoutLibMd5=_withoutLibMd5;
@property(retain, nonatomic) NSString *clientJsExtInfoString; // @synthesize clientJsExtInfoString=_clientJsExtInfoString;
@property(retain, nonatomic) WAAppBrandNotifyLoadingImgInfo *loadingImgInfo; // @synthesize loadingImgInfo=_loadingImgInfo;
@property(retain, nonatomic) NSString *deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(nonatomic) unsigned int debugDevKey; // @synthesize debugDevKey=_debugDevKey;
@property(retain, nonatomic) WAAppBrandNotifyModuleInfo *moduleInfo; // @synthesize moduleInfo=_moduleInfo;
@property(nonatomic) unsigned int from; // @synthesize from=_from;
@property(retain, nonatomic) NSString *checkSum; // @synthesize checkSum=_checkSum;
@property(nonatomic) _Bool isAlreadyDownload; // @synthesize isAlreadyDownload=_isAlreadyDownload;
@property(nonatomic) unsigned int debugEndTime; // @synthesize debugEndTime=_debugEndTime;
@property(nonatomic) unsigned int debugStartTime; // @synthesize debugStartTime=_debugStartTime;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *debugURL; // @synthesize debugURL=_debugURL;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
- (id)arrWidgetInfoJSONDictionary;
- (id)arrPluginCodeInfoJSONDictionary;
- (void)clearDownloadState;
- (void)markModule:(id)arg1 isDownloaded:(_Bool)arg2 checkSum:(id)arg3;
- (void)updateInfoWithPackageExtInfo:(id)arg1;
- (_Bool)isDebugPackageValidWithCurrentTime:(unsigned int)arg1;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

