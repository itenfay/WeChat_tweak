//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MusicPostTipsDetail, NSData, NSString;

@interface WCFinderProfilePostTipsInfo : NSObject
{
    _Bool _isPreloading;
    int _scene;
    NSString *_words;
    NSString *_coverUrl;
    NSData *_postTipsStreamCGIByPass;
    NSString *_title;
    NSString *_operationName;
    MusicPostTipsDetail *_musicTipsInfo;
    unsigned long long _createTime;
}

+ (id)infoWithResp:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_musicTipsInfo;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_isPreloading;
+ (void)PBArrayAdd_operationName;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_postTipsStreamCGIByPass;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_words;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) MusicPostTipsDetail *musicTipsInfo; // @synthesize musicTipsInfo=_musicTipsInfo;
@property(nonatomic) _Bool isPreloading; // @synthesize isPreloading=_isPreloading;
@property(copy, nonatomic) NSString *operationName; // @synthesize operationName=_operationName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSData *postTipsStreamCGIByPass; // @synthesize postTipsStreamCGIByPass=_postTipsStreamCGIByPass;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *words; // @synthesize words=_words;
@property(readonly, copy) NSString *description;
- (_Bool)isExpired;
- (id)initWithResp:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

