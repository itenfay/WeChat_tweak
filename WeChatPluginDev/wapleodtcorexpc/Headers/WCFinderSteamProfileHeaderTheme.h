//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface WCFinderSteamProfileHeaderTheme : NSObject
{
    _Bool _hasCover;
    NSMapTable *_items;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *items; // @synthesize items=_items;
@property(nonatomic) _Bool hasCover; // @synthesize hasCover=_hasCover;
- (void)setImage:(CDUnknownBlockType)arg1 withColor:(id)arg2 forButton:(id)arg3;
- (void)setImage:(CDUnknownBlockType)arg1 withColor:(id)arg2 forImageView:(id)arg3;
- (void)setTitleColor:(id)arg1 forButton:(id)arg2;
- (void)setTextColor:(id)arg1 forLabel:(id)arg2;
- (void)setBackgroundColor:(id)arg1 forView:(id)arg2;
- (void)config:(id)arg1 setupSeletor:(SEL)arg2 normal:(id)arg3 coverObj:(id)arg4;
- (void)config:(id)arg1 key:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (void)cleanUp:(id)arg1 key:(id)arg2;

@end

