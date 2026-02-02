//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIColor, VoIPBubbleMsg;

@interface VoIPBubbleMessageViewModel
{
    VoIPBubbleMsg *_bubbleMsg;
}

+ (id)createMessageViewModelWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) VoIPBubbleMsg *bubbleMsg; // @synthesize bubbleMsg=_bubbleMsg;
@property(readonly, nonatomic) UIColor *contentTextColor;
- (id)additionalAccessibilityDescription;
@property(readonly, nonatomic) NSString *statusTips;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;
- (_Bool)shouldShowRedDot;

@end

