//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, NSString, SightIconView, UIImage, UIImageView;
@protocol WAWebToastViewDelegate;

@interface WAWebToastView : UIView
{
    UIView *_bkgView;
    UIImageView *_tipIconView;
    MMUILabel *_label;
    SightIconView *_loadingIndicator;
    _Bool _isLoading;
    _Bool _isMask;
    long long _seqID;
    id <WAWebToastViewDelegate> _delegate;
    long long _dialogId;
    NSString *_tips;
    UIImage *_icon;
    double _fShowDuration;
}

+ (void)bringToastToFront;
+ (void)adjustPosition:(id)arg1;
+ (void)removeToastInView:(id)arg1;
+ (void)removeToast;
+ (void)hideToast:(CDUnknownBlockType)arg1;
+ (id)tryCreateNewToastInView:(id)arg1;
+ (id)showLoading:(id)arg1 duration:(double)arg2 inView:(id)arg3;
+ (id)showToast:(id)arg1 andText:(id)arg2 duration:(double)arg3 inView:(id)arg4;
+ (id)addToastInView:(id)arg1;
+ (long long)genSeqId;
+ (id)getCurrentToastViewIfHave;
+ (void)setCurrentToastView:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isMask; // @synthesize isMask=_isMask;
@property(nonatomic) double fShowDuration; // @synthesize fShowDuration=_fShowDuration;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) long long dialogId; // @synthesize dialogId=_dialogId;
@property(nonatomic) __weak id <WAWebToastViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long seqID; // @synthesize seqID=_seqID;
- (void)hide:(CDUnknownBlockType)arg1 seqID:(long long)arg2;
- (void)delayHideWithSeqID:(id)arg1;
- (void)show;
- (void)setupHybridUI:(id)arg1 image:(id)arg2;
- (void)setupTextUI:(id)arg1;
- (void)setupToastUI:(id)arg1 image:(id)arg2;
- (void)adjustToastPosition;
- (void)setupLoadingUI:(id)arg1;
- (void)build;
- (id)contentDescription;
- (void)layoutSubviews;
- (id)init;

@end

