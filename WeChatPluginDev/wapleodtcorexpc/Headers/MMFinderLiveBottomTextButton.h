//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMFinderLiveBottomTextButton
{
    _Bool _exposed;
    _Bool _hideServerRedDot;
    CDUnknownBlockType _redDotQueryBlock;
    CDUnknownBlockType _exposeBlock;
    NSString *_redDotPath;
    CDUnknownBlockType _shouldShouldRedDotPredicate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hideServerRedDot; // @synthesize hideServerRedDot=_hideServerRedDot;
@property(copy, nonatomic) CDUnknownBlockType shouldShouldRedDotPredicate; // @synthesize shouldShouldRedDotPredicate=_shouldShouldRedDotPredicate;
@property(nonatomic) _Bool exposed; // @synthesize exposed=_exposed;
@property(copy, nonatomic) NSString *redDotPath; // @synthesize redDotPath=_redDotPath;
@property(copy, nonatomic) CDUnknownBlockType exposeBlock; // @synthesize exposeBlock=_exposeBlock;
@property(copy, nonatomic) CDUnknownBlockType redDotQueryBlock; // @synthesize redDotQueryBlock=_redDotQueryBlock;
- (void)updateRedDotAppearance:(_Bool)arg1;
- (void)updateBadgeValue:(id)arg1;
- (void)updateBadgeNum:(unsigned long long)arg1;
- (void)toggleServerRedDotHidden:(_Bool)arg1;
- (void)markExposed;
- (void)reloadRedDot;

@end

