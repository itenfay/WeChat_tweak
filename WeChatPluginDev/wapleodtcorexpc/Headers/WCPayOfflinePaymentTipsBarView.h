//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, NSString, UIImageView;

@interface WCPayOfflinePaymentTipsBarView : UIView
{
    UIImageView *_iconImgView;
    MMUILabel *_tipsLabel;
    NSString *_tipsContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tipsContent; // @synthesize tipsContent=_tipsContent;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
- (void)setupContentView;
- (id)initWithContainerWidth:(double)arg1 tips:(id)arg2;

@end

