//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, NSString, UIColor, WCFinderJumpInfo, WCFinderNetPagView;
@protocol WCFinderJumpInfoIconViewDelegate;

@interface WCFinderJumpInfoIconView : UIView
{
    _Bool _enableClick;
    _Bool _videoPauseState;
    id <WCFinderJumpInfoIconViewDelegate> _delegate;
    MMWebImageView *_iconImageView;
    WCFinderNetPagView *_iconPagView;
    WCFinderJumpInfo *_jumpInfo;
    UIColor *_localEnableColor;
    UIColor *_disableIconColor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool videoPauseState; // @synthesize videoPauseState=_videoPauseState;
@property(retain, nonatomic) UIColor *disableIconColor; // @synthesize disableIconColor=_disableIconColor;
@property(retain, nonatomic) UIColor *localEnableColor; // @synthesize localEnableColor=_localEnableColor;
@property(nonatomic) _Bool enableClick; // @synthesize enableClick=_enableClick;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) WCFinderNetPagView *iconPagView; // @synthesize iconPagView=_iconPagView;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak id <WCFinderJumpInfoIconViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)refresh;
- (void)setDefaultImage:(id)arg1;
- (void)updateWithIconUrl:(id)arg1 iconType:(int)arg2 pagIconUrl:(id)arg3 defaultImage:(id)arg4 businessType:(int)arg5;
- (void)updateWithLinkStyle:(id)arg1;
- (id)localIconFormJumpInfo:(id)arg1 iconSize:(struct CGSize)arg2 iconColor:(id)arg3 enable:(_Bool)arg4;
- (id)getLocalDefaultPagResPath:(int)arg1;
- (void)updateWithJumpInfo:(id)arg1 enableClick:(_Bool)arg2 localEnableColor:(id)arg3 disableIconColor:(id)arg4;
- (_Bool)enableShowPagIcon;
- (void)showIconView:(id)arg1;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (_Bool)isShow;
- (void)setAlpha:(double)arg1;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

