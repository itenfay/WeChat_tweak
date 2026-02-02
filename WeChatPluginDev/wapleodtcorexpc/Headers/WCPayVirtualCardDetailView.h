//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, UILabel, WCPayVirtualNoBindCard;

@interface WCPayVirtualCardDetailView
{
    WCPayVirtualNoBindCard *m_info;
    MMWebImageView *m_logoView;
    MMWebImageView *m_waterMaskView;
    UILabel *m_bankNameLabel;
    UILabel *m_bankTypeLabel;
    UILabel *m_entranceLabel;
}

- (void).cxx_destruct;
- (void)initView;
- (id)getInfo;
- (id)initWithVirtualCardInfo:(id)arg1;

@end

