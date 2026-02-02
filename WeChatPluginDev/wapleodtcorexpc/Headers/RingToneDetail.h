//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AnyPromise, FinderRingToneSubDetail, LocalRingToneSubDetail, MMListenSimplePlayableInfo, MusicRingToneSubDetail, NSArray, NSString, RingBackDetail, RingBackTextStatusInfo, RingTone, WCFinderDataItem, WCFinderFeedContentVM;

@interface RingToneDetail : NSObject
{
    _Bool _hasVibrateFile;
    _Bool _isPlaying;
    _Bool _exposed;
    _Bool _jumpFromFriendRing;
    _Bool _initFromFinderItem;
    _Bool _isFetchingVibrateFile;
    unsigned int _vibrateFileVersion;
    unsigned long long _type;
    MusicRingToneSubDetail *_music;
    FinderRingToneSubDetail *_finder;
    LocalRingToneSubDetail *_local;
    RingTone *_core;
    NSString *_vibrateFileUrlStr;
    RingBackDetail *_ringDetail;
    WCFinderFeedContentVM *_vm;
    RingBackTextStatusInfo *_verifyInfo;
    double _startPlayVideoTime;
    double _mediaHeight;
    unsigned long long _requestID;
    unsigned long long _searchID;
    MMListenSimplePlayableInfo *_tingInfo;
    AnyPromise *_vibrateFilePromise;
}

+ (id)initFromRingBackPbDetail:(id)arg1 ringBackPbCore:(id)arg2 error:(id *)arg3;
+ (id)WeChatDefaultRing;
- (void).cxx_destruct;
@property(retain, nonatomic) AnyPromise *vibrateFilePromise; // @synthesize vibrateFilePromise=_vibrateFilePromise;
@property(nonatomic) _Bool isFetchingVibrateFile; // @synthesize isFetchingVibrateFile=_isFetchingVibrateFile;
@property(retain, nonatomic) MMListenSimplePlayableInfo *tingInfo; // @synthesize tingInfo=_tingInfo;
@property(nonatomic) unsigned long long searchID; // @synthesize searchID=_searchID;
@property(nonatomic) unsigned long long requestID; // @synthesize requestID=_requestID;
@property(nonatomic) double mediaHeight; // @synthesize mediaHeight=_mediaHeight;
@property(nonatomic) _Bool initFromFinderItem; // @synthesize initFromFinderItem=_initFromFinderItem;
@property(nonatomic) _Bool jumpFromFriendRing; // @synthesize jumpFromFriendRing=_jumpFromFriendRing;
@property(nonatomic) double startPlayVideoTime; // @synthesize startPlayVideoTime=_startPlayVideoTime;
@property(retain, nonatomic) RingBackTextStatusInfo *verifyInfo; // @synthesize verifyInfo=_verifyInfo;
@property(retain, nonatomic) WCFinderFeedContentVM *vm; // @synthesize vm=_vm;
@property(retain, nonatomic) RingBackDetail *ringDetail; // @synthesize ringDetail=_ringDetail;
@property(nonatomic) _Bool exposed; // @synthesize exposed=_exposed;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) _Bool hasVibrateFile; // @synthesize hasVibrateFile=_hasVibrateFile;
@property(nonatomic) unsigned int vibrateFileVersion; // @synthesize vibrateFileVersion=_vibrateFileVersion;
@property(copy, nonatomic) NSString *vibrateFileUrlStr; // @synthesize vibrateFileUrlStr=_vibrateFileUrlStr;
@property(retain, nonatomic) RingTone *core; // @synthesize core=_core;
@property(retain, nonatomic) LocalRingToneSubDetail *local; // @synthesize local=_local;
@property(retain, nonatomic) FinderRingToneSubDetail *finder; // @synthesize finder=_finder;
@property(retain, nonatomic) MusicRingToneSubDetail *music; // @synthesize music=_music;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (_Bool)isAuthenticated;
- (id)description;
- (id)concreteItem;
@property(readonly, copy, nonatomic) NSString *titleAndAuthor;
@property(readonly, copy, nonatomic) NSString *authorDesc;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) NSArray *searchHitWords;
@property(retain, nonatomic) WCFinderDataItem *finderItem;
- (id)fetchMusicRawFilePath;
- (id)finderAudioFile;
- (id)fetchFinderItemRawFilePath;
- (id)promiseRingRawFilePath;
- (id)genAudioFileTransferTaskWith:(id)arg1;
- (id)cropedTempAudioFilePath;
- (void)dealloc;
- (id)identifier;
- (id)initAsInvalidPlaceHolder;
- (id)initFromLocalFile:(id)arg1;
- (id)initFromFinder:(id)arg1;
- (id)initFromPb:(id)arg1 core:(id)arg2;
- (id)initFromPb:(id)arg1;

@end

