//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CContact, MMHeadImageView, NSString, UILabel;

@interface WCCanvasRedEnvelopComponentAvatarView : UIView
{
    NSString *_senderUserName;
    NSString *_senderNickName;
    CContact *_senderContact;
    MMHeadImageView *_headView;
    UILabel *_nameView;
    UILabel *_tailView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tailView; // @synthesize tailView=_tailView;
@property(retain, nonatomic) UILabel *nameView; // @synthesize nameView=_nameView;
@property(retain, nonatomic) MMHeadImageView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) CContact *senderContact; // @synthesize senderContact=_senderContact;
@property(retain, nonatomic) NSString *senderNickName; // @synthesize senderNickName=_senderNickName;
@property(retain, nonatomic) NSString *senderUserName; // @synthesize senderUserName=_senderUserName;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1 senderUserName:(id)arg2 senderNickName:(id)arg3;

@end

