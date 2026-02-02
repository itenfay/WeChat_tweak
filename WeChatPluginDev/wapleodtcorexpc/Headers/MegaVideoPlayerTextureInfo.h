//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber;

@interface MegaVideoPlayerTextureInfo : NSObject
{
    NSNumber *_playerId;
    NSNumber *_textureId;
    NSNumber *_textureWidth;
    NSNumber *_textureHeight;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithPlayerId:(id)arg1 textureId:(id)arg2 textureWidth:(id)arg3 textureHeight:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *textureHeight; // @synthesize textureHeight=_textureHeight;
@property(retain, nonatomic) NSNumber *textureWidth; // @synthesize textureWidth=_textureWidth;
@property(retain, nonatomic) NSNumber *textureId; // @synthesize textureId=_textureId;
@property(retain, nonatomic) NSNumber *playerId; // @synthesize playerId=_playerId;
- (id)toList;

@end

