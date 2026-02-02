//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BizTLTextureInfo, NSNumber;

@interface BizTLPlayerInfo : NSObject
{
    BizTLTextureInfo *_textureInfo;
    NSNumber *_playerId;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithTextureInfo:(id)arg1 playerId:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *playerId; // @synthesize playerId=_playerId;
@property(retain, nonatomic) BizTLTextureInfo *textureInfo; // @synthesize textureInfo=_textureInfo;
- (id)toList;

@end

