//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MMUILabel, UIView, WalletGroupInfo;

@interface WCPayWalletBusinessSectionHeader : UICollectionReusableView
{
    WalletGroupInfo *_headerData;
    UIView *_contentView;
    MMUILabel *_nameLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) WalletGroupInfo *headerData; // @synthesize headerData=_headerData;
- (void)updateHeaderName;
- (void)updateContentView;
- (void)updateView;
- (void)updateViewWithHeaderData:(id)arg1;
- (void)layoutSubviews;

@end

