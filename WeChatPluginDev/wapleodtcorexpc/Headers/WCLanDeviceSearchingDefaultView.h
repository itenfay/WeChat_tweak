//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, NSArray, UIImageView, UILabel;

@interface WCLanDeviceSearchingDefaultView : UIView
{
    UILabel *m_searchLbl;
    NSArray *m_tailStrs;
    unsigned long long m_tailIndex;
    MMTimer *m_tailTimer;
    UIView *m_containerView;
    UIImageView *m_searchingLogo;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (void)textModifyMethod;
- (id)init;

@end

