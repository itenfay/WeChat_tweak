//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class PAGFile, PAGView, UILabel;

@interface MMFinderLiveShopVIPWidgetView : UIView
{
    _Bool _isWeakState;
    PAGFile *_enterPAG;
    PAGFile *_preWeakenPAG;
    CDUnknownBlockType _onClicked;
    PAGView *_pagView;
    UIView *_shadowView;
    UILabel *_textView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isWeakState; // @synthesize isWeakState=_isWeakState;
@property(retain, nonatomic) UILabel *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) PAGView *pagView; // @synthesize pagView=_pagView;
@property(copy, nonatomic) CDUnknownBlockType onClicked; // @synthesize onClicked=_onClicked;
@property(retain, nonatomic) PAGFile *preWeakenPAG; // @synthesize preWeakenPAG=_preWeakenPAG;
@property(retain, nonatomic) PAGFile *enterPAG; // @synthesize enterPAG=_enterPAG;
- (void)willToNormalState;
- (void)layoutSubviews;
- (void)prepareToNormalState;
- (void)willEnterContainer;
- (void)onTap;
- (id)initWithFrame:(struct CGRect)arg1;

@end

