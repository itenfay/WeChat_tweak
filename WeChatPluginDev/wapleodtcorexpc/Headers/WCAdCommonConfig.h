//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAdCommonConfig : NSObject
{
    _Bool _forbidAutoPlay;
    _Bool _hideFirstBossComment;
    int _basicRemWidth;
    int _basicRootFontSize;
    int _finderLiveStreamDisplayType;
}

@property(nonatomic) int finderLiveStreamDisplayType; // @synthesize finderLiveStreamDisplayType=_finderLiveStreamDisplayType;
@property(nonatomic) _Bool hideFirstBossComment; // @synthesize hideFirstBossComment=_hideFirstBossComment;
@property(nonatomic) int basicRootFontSize; // @synthesize basicRootFontSize=_basicRootFontSize;
@property(nonatomic) int basicRemWidth; // @synthesize basicRemWidth=_basicRemWidth;
@property(nonatomic) _Bool forbidAutoPlay; // @synthesize forbidAutoPlay=_forbidAutoPlay;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1 forConfigTag:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

