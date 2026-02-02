//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView, UIImageView;
@protocol WAAppPageSystemMsgViewDelegate;

@interface WAAppPageSystemMsgView : UIView
{
    UIImageView *m_bgImageView;
    RichTextView *m_richTextView;
    NSString *m_text;
    _Bool _useLightStyle;
    id <WAAppPageSystemMsgViewDelegate> _delegate;
    double _textVerMargin;
    double _textHorMargin;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useLightStyle; // @synthesize useLightStyle=_useLightStyle;
@property(nonatomic) double textHorMargin; // @synthesize textHorMargin=_textHorMargin;
@property(nonatomic) double textVerMargin; // @synthesize textVerMargin=_textVerMargin;
@property(nonatomic) __weak id <WAAppPageSystemMsgViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)updateText:(id)arg1;
- (void)layoutSubviews;
- (_Bool)needUpdateLightStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

