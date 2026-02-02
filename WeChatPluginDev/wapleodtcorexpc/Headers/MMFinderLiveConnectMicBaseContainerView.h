//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveTaskId, NSArray, UIScrollView;
@protocol MMFinderLiveConnectMicContainerViewDelegate, MMFinderLiveConnectedMicUserCellViewDelegate;

@interface MMFinderLiveConnectMicBaseContainerView : UIView
{
    MMFinderLiveTaskId *_taskId;
    id <MMFinderLiveConnectedMicUserCellViewDelegate> _cellActionDelegate;
    id <MMFinderLiveConnectMicContainerViewDelegate> _containerDelegate;
    UIScrollView *_mainScrollView;
    NSArray *_connectMicUserList;
}

+ (void)updateSearchBarAppearance:(id)arg1;
+ (id)createSearchBarWithFrame:(struct CGRect)arg1 placeholder:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *connectMicUserList; // @synthesize connectMicUserList=_connectMicUserList;
@property(readonly, nonatomic) UIScrollView *mainScrollView; // @synthesize mainScrollView=_mainScrollView;
@property(nonatomic) __weak id <MMFinderLiveConnectMicContainerViewDelegate> containerDelegate; // @synthesize containerDelegate=_containerDelegate;
@property(nonatomic) __weak id <MMFinderLiveConnectedMicUserCellViewDelegate> cellActionDelegate; // @synthesize cellActionDelegate=_cellActionDelegate;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)scrollListToTopAnimated:(_Bool)arg1;
- (void)updateWithConnectMicUserList:(id)arg1;
- (void)reloadContent;
- (void)onContainerWillDisappear;
- (void)onContainerDidHide;
- (void)onContainerWillHide;
- (void)onContainerDidShow;
- (void)onContainerWillShow;

@end

