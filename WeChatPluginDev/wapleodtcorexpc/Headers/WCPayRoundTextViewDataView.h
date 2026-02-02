//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class KindaRichLabelViewV2, NSString, RoundTextViewData;

@interface WCPayRoundTextViewDataView : UIView
{
    KindaRichLabelViewV2 *_m_text;
    RoundTextViewData *_m_viewData;
    double _m_maxWidth;
}

- (void).cxx_destruct;
@property double m_maxWidth; // @synthesize m_maxWidth=_m_maxWidth;
@property(retain) RoundTextViewData *m_viewData; // @synthesize m_viewData=_m_viewData;
@property(retain) KindaRichLabelViewV2 *m_text; // @synthesize m_text=_m_text;
- (void)onWCPayVoidCallbackWithUserInfo:(id)arg1;
- (void)updateText;
- (void)updateView;
- (void)layoutSubviews;
- (void)updateViewData:(id)arg1 maxWidth:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

