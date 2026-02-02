//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCStoryMediaItem : NSObject
{
    _Bool _notPostSucc;
    _Bool _bUseXorEncrypt;
    float _duration;
    int _createTime;
    float _preloadDuration;
    int _preloadIndex;
    int _encIdx;
    NSString *_tid;
    NSString *_mid;
    NSString *_md5;
    NSString *_videoMD5;
    NSString *_videoUrl;
    NSString *_thumbImageUrl;
    unsigned long long _xorEncrpyKey;
    unsigned long long _enckey;
    NSString *_token;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_token;
+ (void)PBArrayAdd_encIdx;
+ (void)PBArrayAdd_enckey;
+ (void)PBArrayAdd_xorEncrpyKey;
+ (void)PBArrayAdd_bUseXorEncrypt;
+ (void)PBArrayAdd_videoUrl;
+ (void)PBArrayAdd_thumbImageUrl;
+ (void)PBArrayAdd_videoMD5;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_mid;
+ (void)PBArrayAdd_tid;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) int encIdx; // @synthesize encIdx=_encIdx;
@property(nonatomic) unsigned long long enckey; // @synthesize enckey=_enckey;
@property(nonatomic) unsigned long long xorEncrpyKey; // @synthesize xorEncrpyKey=_xorEncrpyKey;
@property(nonatomic) _Bool bUseXorEncrypt; // @synthesize bUseXorEncrypt=_bUseXorEncrypt;
@property(nonatomic) int preloadIndex; // @synthesize preloadIndex=_preloadIndex;
@property(retain, nonatomic) NSString *thumbImageUrl; // @synthesize thumbImageUrl=_thumbImageUrl;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) NSString *videoMD5; // @synthesize videoMD5=_videoMD5;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) _Bool notPostSucc; // @synthesize notPostSucc=_notPostSucc;
@property(nonatomic) float preloadDuration; // @synthesize preloadDuration=_preloadDuration;
@property(nonatomic) int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(readonly, copy) NSString *description;
- (unsigned int)getPreloadPercent;
- (id)generateDownloadArgsWrap;
- (id)getThumbImagePath;
- (id)getTmpThumbImagePath;
- (id)getFormatVideoPath;
- (id)getTempVideoPath;
- (id)getThumbIdentifier;
- (id)getMediaWrapUrl;
- (id)getMediaWrapIdentifier;
- (id)tmpPathForPreview;
- (id)pathForPreview;
- (id)pathForSightData;
- (id)tempPathForSightData;
- (id)getMediaDataPath;
- (_Bool)savePreviewFromData:(id)arg1;
- (_Bool)saveSightDataFromData:(id)arg1;
- (_Bool)saveDataFromData:(id)arg1;
- (_Bool)savePreviewFromPath:(id)arg1;
- (_Bool)saveSightDataFromPath:(id)arg1;
- (_Bool)saveDataFromPath:(id)arg1;
- (void)cleanMeidaFileCache;
- (_Bool)isValid;
- (_Bool)hasPreview;
- (_Bool)hasSight;
- (_Bool)hasData;
- (_Bool)createTempSightPath;
- (id)init;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

