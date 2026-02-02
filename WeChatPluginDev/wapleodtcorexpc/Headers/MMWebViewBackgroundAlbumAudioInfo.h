//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMWebViewBackgroundAlbumAudioExtInfo, NSString;

@interface MMWebViewBackgroundAlbumAudioInfo : NSObject
{
    unsigned int _durantion;
    unsigned int _offset;
    NSString *_domain;
    NSString *_albumId;
    NSString *_audioId;
    MMWebViewBackgroundAlbumAudioExtInfo *_extInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_extInfo;
+ (void)PBArrayAdd_domain;
+ (void)PBArrayAdd_offset;
+ (void)PBArrayAdd_durantion;
+ (void)PBArrayAdd_audioId;
+ (void)PBArrayAdd_albumId;
- (void).cxx_destruct;
@property(retain, nonatomic) MMWebViewBackgroundAlbumAudioExtInfo *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned int durantion; // @synthesize durantion=_durantion;
@property(copy, nonatomic) NSString *audioId; // @synthesize audioId=_audioId;
@property(copy, nonatomic) NSString *albumId; // @synthesize albumId=_albumId;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

