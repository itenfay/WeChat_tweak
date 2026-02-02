//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UILabel, WCGridView;

@interface WCTogetherImageFeedCell
{
    WCGridView *_imageGridView;
    NSArray *_imageViews;
    UILabel *_imageCountLabel;
}

+ (double)heightForItemContentViewWithViewItem:(id)arg1 inTableView:(id)arg2;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *imageCountLabel; // @synthesize imageCountLabel=_imageCountLabel;
@property(copy, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) WCGridView *imageGridView; // @synthesize imageGridView=_imageGridView;
- (void)onClickWCImage:(id)arg1;
- (void)layoutItemContentView;
- (void)loadItemContentView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateValueForKeyPath:(id)arg1;
- (id)observingKeyPathsForViewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

