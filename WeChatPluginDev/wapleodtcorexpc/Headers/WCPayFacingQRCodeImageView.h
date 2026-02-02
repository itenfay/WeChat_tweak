//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString;
@protocol WCPayFacingQRCodeImageViewDelegate;

@interface WCPayFacingQRCodeImageView : UIView
{
    id <WCPayFacingQRCodeImageViewDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayFacingQRCodeImageViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)LongPressEvents;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

