//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveTask, MMUIButton;

@interface WCFinderLiveCompleteHelpView : UIView
{
    MMFinderLiveTask *_liveTask;
    CDUnknownBlockType _onCreatorCenterBlock;
    MMUIButton *_creatorCenterBtn;
    MMUIButton *_helpEntranceBtn;
    UIView *_sepelateLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *sepelateLine; // @synthesize sepelateLine=_sepelateLine;
@property(retain, nonatomic) MMUIButton *helpEntranceBtn; // @synthesize helpEntranceBtn=_helpEntranceBtn;
@property(retain, nonatomic) MMUIButton *creatorCenterBtn; // @synthesize creatorCenterBtn=_creatorCenterBtn;
@property(copy, nonatomic) CDUnknownBlockType onCreatorCenterBlock; // @synthesize onCreatorCenterBlock=_onCreatorCenterBlock;
@property(retain, nonatomic) MMFinderLiveTask *liveTask; // @synthesize liveTask=_liveTask;
- (void)creatorCenterClick;
- (void)helpEntranceBtnClick;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

