//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class ChatroomMsgPackExtend, MMUILabel, MMWebImageView;
@protocol GCBulletMsgFlowCellDelegate;

@interface GCBulletMsgFlowCell : UITableViewCell
{
    _Bool _isThinStyle;
    ChatroomMsgPackExtend *_msgPack;
    id <GCBulletMsgFlowCellDelegate> _delegate;
    MMWebImageView *_avatarIcon;
    MMUILabel *_msgLabel;
}

+ (double)labelHeightForMsgPack:(id)arg1 withWidth:(double)arg2;
+ (id)msgContentOfPack:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *msgLabel; // @synthesize msgLabel=_msgLabel;
@property(retain, nonatomic) MMWebImageView *avatarIcon; // @synthesize avatarIcon=_avatarIcon;
@property(nonatomic) _Bool isThinStyle; // @synthesize isThinStyle=_isThinStyle;
@property(nonatomic) __weak id <GCBulletMsgFlowCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ChatroomMsgPackExtend *msgPack; // @synthesize msgPack=_msgPack;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

