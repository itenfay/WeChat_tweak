//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSObject, NSString, UIImageView, UILabel, WAPlateItem, WAPlateLabel;
@protocol WAPlateInputViewDelegate;

@interface WAPlateInputView
{
    NSObject<WAPlateInputViewDelegate> *_delegate;
    NSMutableArray *_labelArr;
    WAPlateLabel *_lastLabel;
    UILabel *_dotLabel;
    UIImageView *_dotImg;
    WAPlateItem *_currentItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAPlateItem *currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) UIImageView *dotImg; // @synthesize dotImg=_dotImg;
@property(retain, nonatomic) UILabel *dotLabel; // @synthesize dotLabel=_dotLabel;
@property(retain, nonatomic) WAPlateLabel *lastLabel; // @synthesize lastLabel=_lastLabel;
@property(retain, nonatomic) NSMutableArray *labelArr; // @synthesize labelArr=_labelArr;
@property(nonatomic) __weak NSObject<WAPlateInputViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)showToastWithText:(id)arg1;
- (_Bool)checkCanFinishInput;
- (_Bool)disableSpecialBtn:(id)arg1;
- (void)deleteLabel:(id)arg1;
- (void)nextLabel:(id)arg1;
- (void)didInputPlateLabel:(id)arg1 buttonType:(unsigned long long)arg2;
- (void)becomeFoucsLabelWithIdx:(long long)arg1;
- (void)tapLabelClick:(id)arg1;
- (void)loadPlateItem:(id)arg1;
- (void)createSubViewsWithFrame:(struct CGRect)arg1;
- (id)genPlateLabelWithFrame:(struct CGRect)arg1 type:(unsigned long long)arg2 tag:(long long)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

