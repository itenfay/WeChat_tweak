//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMWeEffectManager, NSDictionary, NSMutableArray, NSOperationQueue, NSString;
@protocol WeEffectBaseAdapterDelegate;

@interface WeEffectBaseAdapter : NSObject
{
    NSDictionary *_param;
    MMWeEffectManager *_weeffectManager;
    NSString *_appID;
    NSString *_baseURL;
    NSObject<WeEffectBaseAdapterDelegate> *_delegate;
    NSMutableArray *_imgFetchArray;
    NSMutableArray *_zipFetchArray;
    NSOperationQueue *_queueCustomEffect;
}

+ (id)weeffectType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *queueCustomEffect; // @synthesize queueCustomEffect=_queueCustomEffect;
@property(retain, nonatomic) NSMutableArray *zipFetchArray; // @synthesize zipFetchArray=_zipFetchArray;
@property(retain, nonatomic) NSMutableArray *imgFetchArray; // @synthesize imgFetchArray=_imgFetchArray;
@property(nonatomic) __weak NSObject<WeEffectBaseAdapterDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(nonatomic) __weak MMWeEffectManager *weeffectManager; // @synthesize weeffectManager=_weeffectManager;
@property(retain, nonatomic) NSDictionary *param; // @synthesize param=_param;
- (void)setImagePathWithURL:(id)arg1 path:(id)arg2;
- (_Bool)copyFileWithPath:(id)arg1 toPath:(id)arg2;
- (void)loadImagePathWithURL:(id)arg1 md5:(id)arg2;
- (_Bool)isZipDirValid:(id)arg1 param:(id)arg2;
- (void)unzipFileWithPath:(id)arg1 targetDirectory:(id)arg2 param:(id)arg3;
- (void)fetchZipWithParam:(id)arg1 toTargetDirectory:(id)arg2;
- (id)convertHexColorToRGBArray:(id)arg1;
- (void)writeJson:(id)arg1 toPath:(id)arg2;
- (void)writeJsonToDefaultDir:(id)arg1;
- (void)doZipFetch;
- (void)doImageFetch;
- (void)endWithErrorMessage:(id)arg1;
- (id)getSystemTemporaryDirectory;
- (id)getDefaultDirectory;
- (id)getRootDirectory;
- (id)getDefaultDirectoryWithUsage:(id)arg1 dirName:(id)arg2;
- (void)addZipFetchWithStickerInfo:(id)arg1;
- (id)getImagePathWithName:(id)arg1;
- (void)addImageFetchWithName:(id)arg1 urlString:(id)arg2 md5:(id)arg3;
- (void)onJsonWriteDoneWithPath:(id)arg1;
- (void)onZipFetchDoneWithPath:(id)arg1;
- (void)onImageFetchDone:(_Bool)arg1;
- (void)interrupt;
- (void)load;
- (id)initWithAppID:(id)arg1 baseURL:(id)arg2 param:(id)arg3 weeffectManager:(id)arg4 delegate:(id)arg5;

@end

