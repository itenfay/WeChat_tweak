//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableData, NSMutableDictionary;

@interface WAEJSharedTextureCache : NSObject
{
    NSMutableDictionary *textures;
    NSMutableData *premultiplyTable;
    NSMutableData *unPremultiplyTable;
    _Bool isEnterBackground;
    NSMutableArray *destroyedTextures;
    NSMutableArray *updateTextures;
    _Bool _forceReleaseInBg;
}

@property(nonatomic) _Bool forceReleaseInBg; // @synthesize forceReleaseInBg=_forceReleaseInBg;
@property(nonatomic) _Bool isEnterBackground; // @synthesize isEnterBackground;
@property(readonly, nonatomic) NSMutableDictionary *textures; // @synthesize textures;
- (void)releaseDestroyedTextures;
- (void)addDestroyedTextures:(id)arg1;
@property(readonly, nonatomic) NSData *unPremultiplyTable;
@property(readonly, nonatomic) NSData *premultiplyTable;
- (void)dealloc;
- (void)releaseStoragesOlderThan:(double)arg1;
- (id)init;

@end

