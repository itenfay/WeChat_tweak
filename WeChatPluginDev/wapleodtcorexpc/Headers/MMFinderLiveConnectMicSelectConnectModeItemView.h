//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface MMFinderLiveConnectMicSelectConnectModeItemView : UIView
{
    UILabel *_titleLabel;
    UIView *_separatorLine;
    UIImageView *_selectedIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *selectedIconView; // @synthesize selectedIconView=_selectedIconView;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)unToggle;
- (void)toggle;
- (void)updateSelectedIconHidden:(_Bool)arg1;
- (void)updateWithTitle:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)configAllSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

