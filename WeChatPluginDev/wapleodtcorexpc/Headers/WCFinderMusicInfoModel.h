//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderMusicInfoModel : NSObject
{
    unsigned int _chorusBegin;
    unsigned int _docType;
    NSString *_docId;
    NSString *_albumThumbUrl;
    NSString *_name;
    NSString *_artist;
    NSString *_albumName;
    NSString *_mediaStreamingUrl;
    NSString *_webUrl;
    NSString *_miniappInfo;
    NSString *_floatThumbUrl;
    NSString *_songId;
    double _duration;
}

+ (void)initialize;
+ (void)PBArrayAdd_songId;
+ (void)PBArrayAdd_docType;
+ (void)PBArrayAdd_floatThumbUrl;
+ (void)PBArrayAdd_miniappInfo;
+ (void)PBArrayAdd_webUrl;
+ (void)PBArrayAdd_chorusBegin;
+ (void)PBArrayAdd_mediaStreamingUrl;
+ (void)PBArrayAdd_albumName;
+ (void)PBArrayAdd_artist;
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_albumThumbUrl;
+ (void)PBArrayAdd_docId;
- (void).cxx_destruct;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *songId; // @synthesize songId=_songId;
@property(nonatomic) unsigned int docType; // @synthesize docType=_docType;
@property(copy, nonatomic) NSString *floatThumbUrl; // @synthesize floatThumbUrl=_floatThumbUrl;
@property(copy, nonatomic) NSString *miniappInfo; // @synthesize miniappInfo=_miniappInfo;
@property(copy, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(nonatomic) unsigned int chorusBegin; // @synthesize chorusBegin=_chorusBegin;
@property(copy, nonatomic) NSString *mediaStreamingUrl; // @synthesize mediaStreamingUrl=_mediaStreamingUrl;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(copy, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *albumThumbUrl; // @synthesize albumThumbUrl=_albumThumbUrl;
@property(copy, nonatomic) NSString *docId; // @synthesize docId=_docId;
- (id)genMMMusicInfo;
- (id)genRecommendedMusicInfo;
- (id)genMusicInfo;
- (id)initWithRecommendMusicInfo:(id)arg1;
- (id)initWithFinderMusicInfo:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

