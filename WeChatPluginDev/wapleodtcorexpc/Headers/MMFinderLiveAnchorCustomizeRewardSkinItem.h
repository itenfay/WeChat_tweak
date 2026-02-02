//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveAnchorCustomizeRewardResourceUrl, NSString, UIColor;

@interface MMFinderLiveAnchorCustomizeRewardSkinItem : NSObject
{
    NSString *_skinId;
    NSString *_name;
    UIColor *_color;
    MMFinderLiveAnchorCustomizeRewardResourceUrl *_animationUrl;
    MMFinderLiveAnchorCustomizeRewardResourceUrl *_previewAnimationUrl;
    MMFinderLiveAnchorCustomizeRewardResourceUrl *_thumbnailUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardResourceUrl *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardResourceUrl *previewAnimationUrl; // @synthesize previewAnimationUrl=_previewAnimationUrl;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardResourceUrl *animationUrl; // @synthesize animationUrl=_animationUrl;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *skinId; // @synthesize skinId=_skinId;
- (id)initWithPBSwitchSkinItem:(id)arg1;

@end

