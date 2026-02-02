//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class NSString, WCAdFinderDialogBaseInfo, WCAdFinderDialogBaseView;
@protocol WCAdFinderDialogContainViewDelegate;

@interface WCAdFinderDialogContainView : UIScrollView
{
    WCAdFinderDialogBaseInfo *_dialogInfo;
    WCAdFinderDialogBaseView *_dialogDetailView;
    id <WCAdFinderDialogContainViewDelegate> _containerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCAdFinderDialogContainViewDelegate> containerDelegate; // @synthesize containerDelegate=_containerDelegate;
@property(retain, nonatomic) WCAdFinderDialogBaseView *dialogDetailView; // @synthesize dialogDetailView=_dialogDetailView;
@property(retain, nonatomic) WCAdFinderDialogBaseInfo *dialogInfo; // @synthesize dialogInfo=_dialogInfo;
- (void)onDialogViewConfirmButtonClicked;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (void)layoutSubviews;
- (void)generateContentViews;
- (id)initWithFrame:(struct CGRect)arg1 dialogInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

