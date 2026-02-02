//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class UIView, WCFinderFeedContentVM;

@interface WCFinderRingToneEduActionSheet : NSObject
{
    CDUnknownBlockType _setRingToneCgiBlock;
    WCFinderFeedContentVM *_contentVM;
    UIView *_tipsView;
}

@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(copy, nonatomic) CDUnknownBlockType setRingToneCgiBlock; // @synthesize setRingToneCgiBlock=_setRingToneCgiBlock;
- (void)onClickCloseBtn;
- (void)onClickSetRingToneAction;
- (id)getTipsActionSheetView;
- (double)getCustomView:(double)arg1;
- (double)heightOfWholeSheet;

@end
