//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel;
@protocol WCFinderInvalidMusicTopicViewDelegate;

@interface WCFinderInvalidMusicTopicView : UIView
{
    int _errorCode;
    id <WCFinderInvalidMusicTopicViewDelegate> _delegate;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIButton *_confirmButton;
    NSString *_errMsg;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <WCFinderInvalidMusicTopicViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onConfirmButtonClick;
- (void)layoutUI;
- (id)initWithFrame:(struct CGRect)arg1 errorCode:(int)arg2 errMsg:(id)arg3;

@end

