//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMPageSheetAdapter, UIViewController;
@protocol MMPageSheetContainer;

@protocol MMPageSheetAdapterDelegate <NSObject>

@optional
- (void)pageSheetWillBePresentFrom:(UIViewController *)arg1 inContainer:(id <MMPageSheetContainer>)arg2;
- (void)pageSheetDidChangeVisibleHeight:(MMPageSheetAdapter *)arg1 toHeight:(double)arg2;
- (void)pageSheetContainerDidDismiss:(MMPageSheetAdapter *)arg1;
- (double)pageSheetContentWidth;
- (void)pageSheetPresentAnimateDidEnd:(MMPageSheetAdapter *)arg1;
- (void)pageSheetPresentAnimateWillBegin:(MMPageSheetAdapter *)arg1;
- (void)pageSheetDidRotation:(MMPageSheetAdapter *)arg1;
- (void)pageSheetDidClose:(MMPageSheetAdapter *)arg1 closeType:(long long)arg2;
- (void)pageSheetWillClose:(MMPageSheetAdapter *)arg1 closeType:(long long)arg2;
- (void)pageSheetDidClose:(MMPageSheetAdapter *)arg1 isManualTrigger:(_Bool)arg2;
- (void)pageSheetWillClose:(MMPageSheetAdapter *)arg1 isManualTrigger:(_Bool)arg2;
- (void)pageSheetDidDisappear:(MMPageSheetAdapter *)arg1;
- (void)pageSheetWillDisappear:(MMPageSheetAdapter *)arg1;
- (void)pageSheetDidAppear:(MMPageSheetAdapter *)arg1;
- (void)pageSheetWillAppear:(MMPageSheetAdapter *)arg1;
- (void)pageSheetPresentWillBegin:(MMPageSheetAdapter *)arg1;
@end

