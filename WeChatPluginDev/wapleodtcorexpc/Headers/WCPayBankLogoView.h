//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class NSString, WCPayNetImageResource;

@interface WCPayBankLogoView : UIImageView
{
    NSString *m_bankType;
    WCPayNetImageResource *_m_bankLogoImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayNetImageResource *m_bankLogoImage; // @synthesize m_bankLogoImage=_m_bankLogoImage;
@property(retain, nonatomic) NSString *m_bankType; // @synthesize m_bankType;
- (void)OnGetBankResourcesNotification:(id)arg1;
- (void)SaveAndShowBankLogoImage:(id)arg1;
- (void)OnSuccessGetBankResources:(id)arg1;
- (void)loadCacheImage;
- (void)UpdateImage:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 WithBankType:(id)arg2;
- (void)initViewWithBankType:(id)arg1 Frame:(struct CGRect)arg2;

@end

