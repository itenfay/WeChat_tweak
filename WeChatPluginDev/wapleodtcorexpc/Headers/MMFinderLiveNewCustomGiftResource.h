//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveNewCustomGiftItemResourceURL, NSString;

@interface MMFinderLiveNewCustomGiftResource : NSObject
{
    NSString *_key;
    MMFinderLiveNewCustomGiftItemResourceURL *_thumbnail;
    MMFinderLiveNewCustomGiftItemResourceURL *_preview;
    MMFinderLiveNewCustomGiftItemResourceURL *_animation;
    MMFinderLiveNewCustomGiftItemResourceURL *_landscapeAnimation;
    MMFinderLiveNewCustomGiftItemResourceURL *_signPreview;
    MMFinderLiveNewCustomGiftItemResourceURL *_signThumbnail;
}

+ (_Bool)isResourcePBValid:(id)arg1 business:(id)arg2;
+ (id)transferFromResourcePB:(id)arg1 business:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *signThumbnail; // @synthesize signThumbnail=_signThumbnail;
@property(retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *signPreview; // @synthesize signPreview=_signPreview;
@property(retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *landscapeAnimation; // @synthesize landscapeAnimation=_landscapeAnimation;
@property(retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *animation; // @synthesize animation=_animation;
@property(retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *preview; // @synthesize preview=_preview;
@property(retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

