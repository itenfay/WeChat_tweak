//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol VoIPInvitationWindowDelegate;

@interface VoIPInvitationWindow : NSObject
{
    id <VoIPInvitationWindowDelegate> _delegate;
}

@property(nonatomic) __weak id <VoIPInvitationWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

