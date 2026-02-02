//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CContact, InteractionLabel, MMWebImageView;

@interface TLProfileNicknameContainerView : UIView
{
    CDUnknownBlockType _nicknameClickBlock;
    CDUnknownBlockType _textStateClickBlock;
    CContact *_contact;
    InteractionLabel *_nicknameLabel;
    MMWebImageView *_textStateImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *textStateImageView; // @synthesize textStateImageView=_textStateImageView;
@property(retain, nonatomic) InteractionLabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(copy, nonatomic) CDUnknownBlockType textStateClickBlock; // @synthesize textStateClickBlock=_textStateClickBlock;
@property(copy, nonatomic) CDUnknownBlockType nicknameClickBlock; // @synthesize nicknameClickBlock=_nicknameClickBlock;
- (void)onClickTextState;
- (void)onClickNickname;
- (id)contactTextStateIcon;
- (void)updateWithContact:(id)arg1;
- (void)layoutSubviews;
- (void)initNicknameLabel;
- (void)initTextStateImageView;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 contact:(id)arg2;

@end

