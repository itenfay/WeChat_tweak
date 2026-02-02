//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MMWebViewBackgroundAlbumInfo : NSObject
{
    NSString *_albumId;
    NSString *_curAudioId;
    NSMutableDictionary *_dictAlbumAudioListInfo;
    NSString *_domain;
}

+ (void)initialize;
+ (void)PBArrayAdd_domain;
+ (void)PBArrayAdd_curAudioId;
+ (void)PBArrayAdd_dictAlbumAudioListInfo;
+ (void)PBArrayAdd_albumId;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSMutableDictionary *dictAlbumAudioListInfo; // @synthesize dictAlbumAudioListInfo=_dictAlbumAudioListInfo;
@property(copy, nonatomic) NSString *curAudioId; // @synthesize curAudioId=_curAudioId;
@property(copy, nonatomic) NSString *albumId; // @synthesize albumId=_albumId;
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

