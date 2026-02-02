//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class EditImageEmotionToolAttrView, MJEmoticonPickerItem, MJInspectorToolBar, MJSegmentViewModel, NSString;
@protocol MJEmotionViewControllerDelegate;

@interface MJEmotionViewController : UIViewController
{
    MJSegmentViewModel *_entranceSegmentVM;
    id <MJEmotionViewControllerDelegate> _delegate;
    EditImageEmotionToolAttrView *_emotionView;
    MJInspectorToolBar *_toolBar;
    MJEmoticonPickerItem *_backupItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MJEmoticonPickerItem *backupItem; // @synthesize backupItem=_backupItem;
@property(retain, nonatomic) MJInspectorToolBar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) EditImageEmotionToolAttrView *emotionView; // @synthesize emotionView=_emotionView;
@property(nonatomic) __weak id <MJEmotionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MJSegmentViewModel *entranceSegmentVM; // @synthesize entranceSegmentVM=_entranceSegmentVM;
@property(readonly, nonatomic) _Bool isReplacing;
- (id)currentViewController;
- (void)didSelectEmoticonWithWrap:(id)arg1 decodedImage:(id)arg2;
- (void)onEmotionToolBarDoneBtnClicked;
- (void)addToolBarIfNeeded;
- (void)setupViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

