//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveAnchorCustomizeRewardResourceUrl, MMFinderLiveAnchorCustomizeRewardSkinItem, NSString;

@interface MMFinderLiveAnchorCustomizeRewardStyleItem : NSObject
{
    MMFinderLiveAnchorCustomizeRewardSkinItem *_selectedSkinItem;
    NSString *_customText;
    MMFinderLiveAnchorCustomizeRewardResourceUrl *_customImageResource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardResourceUrl *customImageResource; // @synthesize customImageResource=_customImageResource;
@property(retain, nonatomic) NSString *customText; // @synthesize customText=_customText;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardSkinItem *selectedSkinItem; // @synthesize selectedSkinItem=_selectedSkinItem;
- (id)initWithSelectedSkinId:(id)arg1 customText:(id)arg2 customImageResource:(id)arg3 skinItemArray:(id)arg4;
- (id)initWithPBSelectedValue:(id)arg1 skinItemArray:(id)arg2;

@end

