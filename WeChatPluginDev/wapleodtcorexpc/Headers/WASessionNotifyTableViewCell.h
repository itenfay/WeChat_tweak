//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, NSString, UIButton, UILabel, UIView;
@protocol WASessionNotifyTableViewCellDelegate;

@interface WASessionNotifyTableViewCell
{
    NSString *_userName;
    NSString *_nickName;
    NSString *_headImageURL;
    MMWebImageView *_headImageView;
    UILabel *_titleLabel;
    UIButton *_openButton;
    UIView *_sepreateLine;
    id <WASessionNotifyTableViewCellDelegate> _cellViewDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WASessionNotifyTableViewCellDelegate> cellViewDelegate; // @synthesize cellViewDelegate=_cellViewDelegate;
- (void)onClickOpenButton:(id)arg1;
- (void)updateData;
- (void)layoutSubviews;
- (void)initSeperateLine;
- (void)initOpenButton;
- (void)initTitleLabel;
- (void)initHeadImgeView;
- (void)initView;
- (id)getNickName;
- (id)getUserName;
- (void)updateDataWithDelegate:(id)arg1 userName:(id)arg2 nickName:(id)arg3 headImageURL:(id)arg4 isShowSeperateLine:(_Bool)arg5;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

