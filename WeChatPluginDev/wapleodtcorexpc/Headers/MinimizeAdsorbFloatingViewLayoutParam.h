//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MinimizeAdsorbFloatingViewLayoutParam : NSObject
{
    _Bool _animated;
    unsigned long long _positionType;
    unsigned long long _contentType;
    double _duration;
    struct CGSize _outerContentSize;
    struct UIEdgeInsets _safeAreaInsets;
}

+ (id)genLayoutParamWithPositionType:(unsigned long long)arg1 contentType:(unsigned long long)arg2 outerContentSize:(struct CGSize)arg3 safeAreaInsets:(struct UIEdgeInsets)arg4 animated:(_Bool)arg5 duration:(double)arg6;
@property(nonatomic) struct UIEdgeInsets safeAreaInsets; // @synthesize safeAreaInsets=_safeAreaInsets;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) struct CGSize outerContentSize; // @synthesize outerContentSize=_outerContentSize;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) unsigned long long positionType; // @synthesize positionType=_positionType;

@end

