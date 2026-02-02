//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol WCPayPaidOrderShowInfoViewDelegate;

@interface WCPayPaidOrderShowInfoView : UIView
{
    NSArray *_m_showArray;
    id <WCPayPaidOrderShowInfoViewDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayPaidOrderShowInfoViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSArray *m_showArray; // @synthesize m_showArray=_m_showArray;
- (void)onSingleTap:(id)arg1;
- (void)updateWithShowInfo:(id)arg1;
- (void)updateDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

