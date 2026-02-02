//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, NSString, NSURL, ShareOpenSDKStateItem, UIImage, UILabel, UIView, WCLanDeviceStateItemProgressView;

@interface ShareActionSheetCell
{
    UIView *m_contentView;
    UIView *m_header;
    MMWebImageView *m_imageView;
    UILabel *m_titleLabel;
    UILabel *m_subTitleLabel;
    UIView *m_stateView;
    WCLanDeviceStateItemProgressView *m_progressView;
    UILabel *m_resultLabel;
    UIView *m_resultBgView;
    long long m_index;
    NSString *m_title;
    UIImage *m_iconImg;
    NSURL *m_iconImgUrl;
    id m_userInfo;
    ShareOpenSDKStateItem *m_stateItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ShareOpenSDKStateItem *m_stateItem; // @synthesize m_stateItem;
@property(retain, nonatomic) id m_userInfo; // @synthesize m_userInfo;
@property(retain, nonatomic) NSURL *m_iconImgUrl; // @synthesize m_iconImgUrl;
@property(retain, nonatomic) UIImage *m_iconImg; // @synthesize m_iconImg;
@property(copy, nonatomic) NSString *m_title; // @synthesize m_title;
@property(nonatomic) long long m_index; // @synthesize m_index;
- (double)lineHeight;
- (id)init;

@end

