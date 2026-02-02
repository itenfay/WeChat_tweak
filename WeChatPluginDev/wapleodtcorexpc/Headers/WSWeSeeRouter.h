//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController;

@interface WSWeSeeRouter : NSObject
{
    MMUIViewController *_curViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController *curViewController; // @synthesize curViewController=_curViewController;
- (void)loadPrefetchConfigWith:(id)arg1;
- (void)addPrefetchConfigWith:(id)arg1;
- (void)openWeSeeUserCenter;
- (void)searchSceneopenWeSeePageWith:(id)arg1;
- (void)openWeSeePageWithParams:(id)arg1;
- (id)initWithViewController:(id)arg1;

@end

