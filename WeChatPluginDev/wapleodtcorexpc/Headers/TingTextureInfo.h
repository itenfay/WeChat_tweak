//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber;

@interface TingTextureInfo : NSObject
{
    NSNumber *_textureId;
    NSNumber *_textureWidth;
    NSNumber *_textureHeight;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithTextureId:(id)arg1 textureWidth:(id)arg2 textureHeight:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *textureHeight; // @synthesize textureHeight=_textureHeight;
@property(retain, nonatomic) NSNumber *textureWidth; // @synthesize textureWidth=_textureWidth;
@property(retain, nonatomic) NSNumber *textureId; // @synthesize textureId=_textureId;
- (id)toList;

@end

