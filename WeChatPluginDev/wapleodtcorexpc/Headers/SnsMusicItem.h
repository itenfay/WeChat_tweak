//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SnsMusicItem : NSObject
{
    unsigned int _createTime;
    NSString *_musicName;
    NSString *_singer;
    NSString *_albumName;
    NSString *_coverImageUrl;
    NSString *_lyrics;
    NSString *_musicUrl;
    NSString *_musicLowBandUrl;
    NSString *_webUrl;
    NSString *_musicID;
    NSString *_tid;
    NSString *_username;
    NSString *_appId;
    NSString *_coverHDImageUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_coverHDImageUrl;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_musicID;
+ (void)PBArrayAdd_webUrl;
+ (void)PBArrayAdd_musicLowBandUrl;
+ (void)PBArrayAdd_musicUrl;
+ (void)PBArrayAdd_lyrics;
+ (void)PBArrayAdd_coverImageUrl;
+ (void)PBArrayAdd_albumName;
+ (void)PBArrayAdd_singer;
+ (void)PBArrayAdd_musicName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *coverHDImageUrl; // @synthesize coverHDImageUrl=_coverHDImageUrl;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *musicID; // @synthesize musicID=_musicID;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(retain, nonatomic) NSString *musicLowBandUrl; // @synthesize musicLowBandUrl=_musicLowBandUrl;
@property(retain, nonatomic) NSString *musicUrl; // @synthesize musicUrl=_musicUrl;
@property(retain, nonatomic) NSString *lyrics; // @synthesize lyrics=_lyrics;
@property(retain, nonatomic) NSString *coverImageUrl; // @synthesize coverImageUrl=_coverImageUrl;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) NSString *singer; // @synthesize singer=_singer;
@property(retain, nonatomic) NSString *musicName; // @synthesize musicName=_musicName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

