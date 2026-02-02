//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class CAShapeLayer, KidsAcctInfo, MMHeadImageView, MMUILabel;

@interface KidsWatchAccountItemView : UIControl
{
    double _cornerRadius;
    KidsAcctInfo *_accountInfo;
    MMHeadImageView *_headImageView;
    MMUILabel *_nicknameLabel;
    MMUILabel *_deviceLabel;
    CAShapeLayer *_dotLayer;
    MMUILabel *_statusLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) CAShapeLayer *dotLayer; // @synthesize dotLayer=_dotLayer;
@property(retain, nonatomic) MMUILabel *deviceLabel; // @synthesize deviceLabel=_deviceLabel;
@property(retain, nonatomic) MMUILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) KidsAcctInfo *accountInfo; // @synthesize accountInfo=_accountInfo;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (double)updateSizeAndCalculateHeightFromFrame:(struct CGRect)arg1;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

