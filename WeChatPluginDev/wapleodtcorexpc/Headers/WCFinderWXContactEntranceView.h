//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UILabel, WCFinderAuthInfoIconView;

@interface WCFinderWXContactEntranceView : UIView
{
    _Bool _useNewStyle;
    UIView *_contactInfoBox;
    UILabel *_contactNameLabel;
    UILabel *_authInfoLabel;
    UILabel *_contactDescLabel;
    WCFinderAuthInfoIconView *_authIconView;
    UIView *_coverStackView;
}

+ (double)displayHeightWithNewStyle:(_Bool)arg1 contact:(id)arg2 coverItems:(vector_3b4bbe29)arg3 titleFont:(id)arg4 contactDesc:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *coverStackView; // @synthesize coverStackView=_coverStackView;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UILabel *contactDescLabel; // @synthesize contactDescLabel=_contactDescLabel;
@property(retain, nonatomic) UILabel *authInfoLabel; // @synthesize authInfoLabel=_authInfoLabel;
@property(retain, nonatomic) UILabel *contactNameLabel; // @synthesize contactNameLabel=_contactNameLabel;
@property(retain, nonatomic) UIView *contactInfoBox; // @synthesize contactInfoBox=_contactInfoBox;
@property(nonatomic) _Bool useNewStyle; // @synthesize useNewStyle=_useNewStyle;
- (void)configCellInfo:(id)arg1;
- (void)setupViewWithNewStyle:(_Bool)arg1 contact:(id)arg2 coverItems:(vector_3b4bbe29)arg3 showIcon:(_Bool)arg4 contactDesc:(id)arg5;
- (id)initWithTitleFont:(id)arg1 width:(double)arg2;

@end

