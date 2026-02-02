//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CContact, MMUILabel, MMWebImageView, NSString, UIColor, UIImageView;

@interface TextStateItemView : UIView
{
    _Bool m_bShowTitle;
    UIImageView *_unreadImageView;
    CContact *_contact;
    MMWebImageView *_stateEmojiImageView;
    MMUILabel *_stateTextLabel;
    struct CGSize _stateEmojiSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize stateEmojiSize; // @synthesize stateEmojiSize=_stateEmojiSize;
@property(retain, nonatomic) MMUILabel *stateTextLabel; // @synthesize stateTextLabel=_stateTextLabel;
@property(retain, nonatomic) MMWebImageView *stateEmojiImageView; // @synthesize stateEmojiImageView=_stateEmojiImageView;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UIImageView *unreadImageView; // @synthesize unreadImageView=_unreadImageView;
- (void)onTextStateRead:(id)arg1 username:(id)arg2;
- (void)onTextStateDataUpdated;
- (void)onTextStateDataLoaded;
- (void)onTextStateUpdateForUserName:(id)arg1;
@property(retain, nonatomic) UIColor *emojiTintColor;
- (void)updateWithContact:(id)arg1;
- (void)sizeToFit;
- (void)setupUI;
- (id)initWithContact:(id)arg1 stateEmojiSize:(struct CGSize)arg2 showTitle:(_Bool)arg3;
- (id)initWithContact:(id)arg1 showTitle:(_Bool)arg2;
- (id)initWithContact:(id)arg1 stateEmojiSize:(struct CGSize)arg2;
- (id)initWithContact:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

