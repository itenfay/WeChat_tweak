//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class RichTextView, UIImageView, WCFinderBulletItem;

@interface WCFinderBulletItemTextView : UIView
{
    WCFinderBulletItem *_item;
    RichTextView *_contentTextView;
    UIImageView *_userIdentityImg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *userIdentityImg; // @synthesize userIdentityImg=_userIdentityImg;
@property(retain, nonatomic) RichTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(nonatomic) __weak WCFinderBulletItem *item; // @synthesize item=_item;
- (void)updateContent:(id)arg1 userIdentity:(int)arg2;
- (id)getCurrentSubTitleTextAttributeObj;
- (id)initWithStyleConfig:(id)arg1 maxWidth:(double)arg2;

@end

