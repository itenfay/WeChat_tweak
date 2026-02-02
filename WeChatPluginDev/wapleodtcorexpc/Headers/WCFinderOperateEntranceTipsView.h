//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, WCFinderCustomImageRichTextView;

@interface WCFinderOperateEntranceTipsView : UIView
{
    _Bool _needReflush;
    NSString *_content;
    CDUnknownBlockType _onClickOtherArea;
    UIView *_referView;
    WCFinderCustomImageRichTextView *_textView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needReflush; // @synthesize needReflush=_needReflush;
@property(retain, nonatomic) WCFinderCustomImageRichTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak UIView *referView; // @synthesize referView=_referView;
@property(copy, nonatomic) CDUnknownBlockType onClickOtherArea; // @synthesize onClickOtherArea=_onClickOtherArea;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)handleOtherTouch;
- (id)createTipsTextVeiw;
- (void)setupBubble;
- (void)setupContent:(id)arg1 referView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

