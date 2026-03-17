//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface WCCanvasSocialComponentFriendAvatarView : UIView
{
    _Bool _useCdn;
    unsigned int _scene;
}

@property(nonatomic) _Bool useCdn; // @synthesize useCdn=_useCdn;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (id)generateAvatarViewWithUsername:(id)arg1;
- (id)generateAvatarViewWithUrl:(id)arg1;
- (void)updateAvatarsWithAdAvatar:(id)arg1 friendUsernames:(id)arg2 commonAvatarImgs:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 scene:(unsigned int)arg2 useCdn:(_Bool)arg3;

@end

