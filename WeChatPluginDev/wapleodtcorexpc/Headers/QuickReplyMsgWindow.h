//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol QuickReplyMsgWindowDelegate;

@interface QuickReplyMsgWindow : NSObject
{
    id <QuickReplyMsgWindowDelegate> _delegate;
}

@property(nonatomic) __weak id <QuickReplyMsgWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)init;

@end

