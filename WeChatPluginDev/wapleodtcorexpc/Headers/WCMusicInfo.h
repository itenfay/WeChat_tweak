//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCMusicInfo : NSObject
{
    NSString *_title;
    NSString *_singer;
    NSString *_webUrl;
    NSString *_dataUrl;
    NSString *_lowBandUrl;
    NSString *_appId;
    NSString *_nsCoverImg;
    NSString *_nsCoverImgHD;
    NSString *_lyric;
}

+ (void)initialize;
+ (void)PBArrayAdd_lyric;
+ (void)PBArrayAdd_nsCoverImgHD;
+ (void)PBArrayAdd_nsCoverImg;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_lowBandUrl;
+ (void)PBArrayAdd_dataUrl;
+ (void)PBArrayAdd_webUrl;
+ (void)PBArrayAdd_singer;
+ (void)PBArrayAdd_title;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lyric; // @synthesize lyric=_lyric;
@property(retain, nonatomic) NSString *nsCoverImgHD; // @synthesize nsCoverImgHD=_nsCoverImgHD;
@property(retain, nonatomic) NSString *nsCoverImg; // @synthesize nsCoverImg=_nsCoverImg;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *lowBandUrl; // @synthesize lowBandUrl=_lowBandUrl;
@property(retain, nonatomic) NSString *dataUrl; // @synthesize dataUrl=_dataUrl;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(retain, nonatomic) NSString *singer; // @synthesize singer=_singer;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isValidForShow;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

