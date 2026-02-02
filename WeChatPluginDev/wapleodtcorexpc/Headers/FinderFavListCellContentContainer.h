//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, WCFinderInteractionLabelGroupView;

@interface FinderFavListCellContentContainer : UIView
{
    CDUnknownBlockType _clickNicknameBlock;
    UILabel *_nickNameLabel;
    UIImageView *_finderLogoView;
    WCFinderInteractionLabelGroupView *_nicknameTailLabel;
    WCFinderInteractionLabelGroupView *_bottomInteractLabel;
    struct CGSize _layoutSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(retain, nonatomic) WCFinderInteractionLabelGroupView *bottomInteractLabel; // @synthesize bottomInteractLabel=_bottomInteractLabel;
@property(retain, nonatomic) WCFinderInteractionLabelGroupView *nicknameTailLabel; // @synthesize nicknameTailLabel=_nicknameTailLabel;
@property(retain, nonatomic) UIImageView *finderLogoView; // @synthesize finderLogoView=_finderLogoView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(copy, nonatomic) CDUnknownBlockType clickNicknameBlock; // @synthesize clickNicknameBlock=_clickNicknameBlock;
- (void)clickNickNameAction;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateWithFavInfo:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

