//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveChooseClarityDataItem, MMUILabel, UIImageView;

@interface MMFinderLiveClarityHeaderButton : UIView
{
    CDUnknownBlockType _selfSizeChangeCallback;
    CDUnknownBlockType _onTapCallback;
    MMUILabel *_clarityLabel;
    UIImageView *_arrowImgView;
    MMFinderLiveChooseClarityDataItem *_clarityDataItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveChooseClarityDataItem *clarityDataItem; // @synthesize clarityDataItem=_clarityDataItem;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) MMUILabel *clarityLabel; // @synthesize clarityLabel=_clarityLabel;
@property(copy, nonatomic) CDUnknownBlockType onTapCallback; // @synthesize onTapCallback=_onTapCallback;
@property(copy, nonatomic) CDUnknownBlockType selfSizeChangeCallback; // @synthesize selfSizeChangeCallback=_selfSizeChangeCallback;
- (void)handleClarityTapGesture:(id)arg1;
- (_Bool)isClarityDataItemValid;
- (void)updateClarityDataItem:(id)arg1;
- (struct CGSize)getSelfSize;
- (void)layoutArrowImgView;
- (void)layoutClarityLabel;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)addTapGesture;
- (void)updateBorderLayer;
- (id)init;

@end

