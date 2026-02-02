//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView, MMUIImageView, NSString, UIColor, UILabel;
@protocol MMMsgSearchTabViewDelegate;

@interface MMMsgSearchTabView : UIView
{
    MMUIActivityIndicatorView *m_activityIndicatorView;
    MMUIImageView *m_loadingDoneImageView;
    unsigned int _msgSearchType;
    unsigned int _msgSearchLoadingType;
    unsigned int _msgSearchViewTitleLeftMargin;
    unsigned int _msgSearchViewTitleRightMargin;
    unsigned int _msgSearchNumber;
    id <MMMsgSearchTabViewDelegate> delegate;
    UIColor *_normalColor;
    UIColor *_selectedColor;
    UIView *_containerView;
    UILabel *_titleLabel;
    double _fontSize;
    UILabel *_numberLabel;
    double _numberFontSize;
}

- (void).cxx_destruct;
@property(nonatomic) double numberFontSize; // @synthesize numberFontSize=_numberFontSize;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned int msgSearchNumber; // @synthesize msgSearchNumber=_msgSearchNumber;
@property(nonatomic) unsigned int msgSearchViewTitleRightMargin; // @synthesize msgSearchViewTitleRightMargin=_msgSearchViewTitleRightMargin;
@property(nonatomic) unsigned int msgSearchViewTitleLeftMargin; // @synthesize msgSearchViewTitleLeftMargin=_msgSearchViewTitleLeftMargin;
@property(nonatomic) unsigned int msgSearchLoadingType; // @synthesize msgSearchLoadingType=_msgSearchLoadingType;
@property(nonatomic) unsigned int msgSearchType; // @synthesize msgSearchType=_msgSearchType;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)updateForState:(unsigned long long)arg1;
- (double)calculateWidth;
- (void)initNumberLabel;
- (void)initLoadingDoneImageView;
- (void)initActivityIndicatorView;
- (void)initUI;
- (double)getMsgSearchType;
- (struct CGRect)getTitleLabelFrame;
- (double)getTabUnderLineWidth;
- (void)sizeToFit;
- (void)setTitleText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

