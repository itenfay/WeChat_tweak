//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BizRect, FlutterStandardTypedData, NSNumber, NSString;

@interface BizFinderPigeonInfo : NSObject
{
    NSString *_fromSessionIdInfo;
    NSString *_objectId;
    NSString *_exportId;
    NSString *_nonceId;
    NSNumber *_mediaType;
    NSString *_encryptUsername;
    NSString *_reportInfo;
    NSNumber *_alignment;
    NSString *_title;
    NSString *_coverImgUrl;
    NSString *_nickName;
    NSString *_headImgUrl;
    NSNumber *_finderDuration;
    NSNumber *_finderHeight;
    NSNumber *_finderWidth;
    NSNumber *_finderCoverHeight;
    NSNumber *_finderCoverWidth;
    NSNumber *_finderMediaType;
    NSNumber *_currentPlayMs;
    NSNumber *_isLandscapeVideo;
    FlutterStandardTypedData *_animatedImage;
    BizRect *_animatedImageRect;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithFromSessionIdInfo:(id)arg1 objectId:(id)arg2 exportId:(id)arg3 nonceId:(id)arg4 mediaType:(id)arg5 encryptUsername:(id)arg6 reportInfo:(id)arg7 alignment:(id)arg8 title:(id)arg9 coverImgUrl:(id)arg10 nickName:(id)arg11 headImgUrl:(id)arg12 finderDuration:(id)arg13 finderHeight:(id)arg14 finderWidth:(id)arg15 finderCoverHeight:(id)arg16 finderCoverWidth:(id)arg17 finderMediaType:(id)arg18 currentPlayMs:(id)arg19 isLandscapeVideo:(id)arg20 animatedImage:(id)arg21 animatedImageRect:(id)arg22;
- (void).cxx_destruct;
@property(retain, nonatomic) BizRect *animatedImageRect; // @synthesize animatedImageRect=_animatedImageRect;
@property(retain, nonatomic) FlutterStandardTypedData *animatedImage; // @synthesize animatedImage=_animatedImage;
@property(retain, nonatomic) NSNumber *isLandscapeVideo; // @synthesize isLandscapeVideo=_isLandscapeVideo;
@property(retain, nonatomic) NSNumber *currentPlayMs; // @synthesize currentPlayMs=_currentPlayMs;
@property(retain, nonatomic) NSNumber *finderMediaType; // @synthesize finderMediaType=_finderMediaType;
@property(retain, nonatomic) NSNumber *finderCoverWidth; // @synthesize finderCoverWidth=_finderCoverWidth;
@property(retain, nonatomic) NSNumber *finderCoverHeight; // @synthesize finderCoverHeight=_finderCoverHeight;
@property(retain, nonatomic) NSNumber *finderWidth; // @synthesize finderWidth=_finderWidth;
@property(retain, nonatomic) NSNumber *finderHeight; // @synthesize finderHeight=_finderHeight;
@property(retain, nonatomic) NSNumber *finderDuration; // @synthesize finderDuration=_finderDuration;
@property(copy, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl=_headImgUrl;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *coverImgUrl; // @synthesize coverImgUrl=_coverImgUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *alignment; // @synthesize alignment=_alignment;
@property(copy, nonatomic) NSString *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(copy, nonatomic) NSString *encryptUsername; // @synthesize encryptUsername=_encryptUsername;
@property(retain, nonatomic) NSNumber *mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(copy, nonatomic) NSString *exportId; // @synthesize exportId=_exportId;
@property(copy, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
@property(copy, nonatomic) NSString *fromSessionIdInfo; // @synthesize fromSessionIdInfo=_fromSessionIdInfo;
- (id)toList;

@end

