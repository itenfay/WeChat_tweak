//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, NSString, UILabel;

@interface GCStatusView : UIView
{
    _Bool _isPureText;
    MMWebImageView *_stateIconView;
    NSString *_statusDesc;
    NSString *_fixedStatusDesc;
    UILabel *_statusLabel;
    struct CGSize _initSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPureText; // @synthesize isPureText=_isPureText;
@property(nonatomic) struct CGSize initSize; // @synthesize initSize=_initSize;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) NSString *fixedStatusDesc; // @synthesize fixedStatusDesc=_fixedStatusDesc;
@property(retain, nonatomic) NSString *statusDesc; // @synthesize statusDesc=_statusDesc;
@property(retain, nonatomic) MMWebImageView *stateIconView; // @synthesize stateIconView=_stateIconView;
- (double)leftMarginForTextStatus;
- (void)hideStatusLabel;
- (void)configureFoldStatus:(_Bool)arg1;
- (void)playAnimation;
- (void)configureBgColor:(id)arg1 imgUrl:(id)arg2 statusDesc:(id)arg3 needFold:(_Bool)arg4 needAnimation:(_Bool)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

@end

