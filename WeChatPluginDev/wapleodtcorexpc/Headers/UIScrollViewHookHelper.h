//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface UIScrollViewHookHelper : NSObject
{
}

+ (_Bool)isHookSwitch;
+ (void)addInstanceMethodWithDestinationSelector:(SEL)arg1 sourceSelector:(SEL)arg2 fromClass:(Class)arg3 toClass:(Class)arg4;
+ (void)addInstanceMethodWithSelector:(SEL)arg1 fromClass:(Class)arg2 toClass:(Class)arg3;
+ (CDUnknownFunctionPointerType)implementationOfMethodSelector:(SEL)arg1 fromClass:(Class)arg2;
+ (void)addInstanceMethodWithSelectors:(SEL)arg1 object:(id)arg2 fromClass:(Class)arg3 toClass:(Class)arg4;
+ (void)unHookUICollectionView:(id)arg1;
+ (void)unHookUITableView:(id)arg1;
+ (void)hookUICollectionView:(id)arg1;
+ (void)hookUITableView:(id)arg1;
+ (void)searchAndHookScrollViewCell:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end

