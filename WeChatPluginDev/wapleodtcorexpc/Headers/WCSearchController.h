//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UISearchController.h>

@class MMUISearchBar;
@protocol WCSearchControllDelegate;

@interface WCSearchController : UISearchController
{
    _Bool _forceFixSearchContainerTop;
    id <WCSearchControllDelegate> _wcSearchControllDelegate;
    MMUISearchBar *_wcSearchBar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUISearchBar *wcSearchBar; // @synthesize wcSearchBar=_wcSearchBar;
@property(nonatomic) _Bool forceFixSearchContainerTop; // @synthesize forceFixSearchContainerTop=_forceFixSearchContainerTop;
@property(nonatomic) __weak id <WCSearchControllDelegate> wcSearchControllDelegate; // @synthesize wcSearchControllDelegate=_wcSearchControllDelegate;
- (_Bool)accessibilityPerformEscape;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)searchBar;
- (void)viewDidLoad;
- (void)initCustomSearchBar;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (id)initWithSearchResultsController:(id)arg1;

@end

