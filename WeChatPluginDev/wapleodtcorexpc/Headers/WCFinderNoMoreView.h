//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UILabel;

@interface WCFinderNoMoreView : UIView
{
    UIView *_leftLineView;
    UIView *_logoView;
    UIView *_rightLineView;
    UILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *rightLineView; // @synthesize rightLineView=_rightLineView;
@property(retain, nonatomic) UIView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UIView *leftLineView; // @synthesize leftLineView=_leftLineView;
- (void)setDarkMode:(_Bool)arg1;
- (id)lineBackgroundColor;
- (id)createPointLogoView;
- (void)setTips:(id)arg1;
- (void)setColor:(id)arg1;
- (void)installLogoView:(id)arg1;
- (void)useLogoIconNameOnly:(id)arg1 size:(struct CGSize)arg2;
- (void)useLogoIconName:(id)arg1 size:(struct CGSize)arg2;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

