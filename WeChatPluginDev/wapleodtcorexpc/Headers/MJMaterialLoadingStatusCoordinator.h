//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol MJMaterialLoadingStatusViewModel;

@interface MJMaterialLoadingStatusCoordinator : NSObject
{
    id <MJMaterialLoadingStatusViewModel> _viewModel;
    NSMutableDictionary *_loadingViews;
    NSString *_lastSelectedID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *lastSelectedID; // @synthesize lastSelectedID=_lastSelectedID;
@property(retain, nonatomic) NSMutableDictionary *loadingViews; // @synthesize loadingViews=_loadingViews;
@property(nonatomic) __weak id <MJMaterialLoadingStatusViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void)freeLoadingStyleWithID:(id)arg1 forView:(id)arg2;
- (void)setupLoadingViewWithID:(id)arg1 forView:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)attachLoadingVieWithID:(id)arg1 forView:(id)arg2;
- (void)removeLoadingStyleWithID:(id)arg1 forView:(id)arg2;
- (void)updateLoadingStyleWithID:(id)arg1 forView:(id)arg2;
- (void)didSelectWithID:(id)arg1 forView:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithViewModel:(id)arg1;

@end

