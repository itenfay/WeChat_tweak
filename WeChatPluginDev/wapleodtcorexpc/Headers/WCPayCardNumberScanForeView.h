//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;

@interface WCPayCardNumberScanForeView : UIView
{
    UIButton *infoBtn;
    UILabel *nameLabel;
    UILabel *tipsLabel;
    NSString *_username;
    id _target;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void)adjustToNewSize;
- (void)commonInit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 target:(id)arg2 username:(id)arg3;

@end

