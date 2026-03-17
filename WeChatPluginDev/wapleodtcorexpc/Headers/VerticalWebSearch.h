//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class UIViewController;

@interface VerticalWebSearch : NSObject
{
    UIViewController *_fromViewController;
}

+ (void)jumpLiveSearchFrom:(id)arg1;
+ (_Bool)finderLiveEnabled;
@property(nonatomic) __weak UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
- (void)_didStartWith:(id)arg1;
- (id)associateSearchBarWith:(id)arg1 withSearchBarAnimation:(_Bool)arg2;
- (id)associateSearchBarWith:(id)arg1;
- (id)initWithContextMode:(CDUnknownBlockType)arg1;

@end
