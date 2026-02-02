//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMHeadImageView;

@interface SharePreConfirmHeadCell : UITableViewCell
{
    _Bool _isFakeContact;
    MMHeadImageView *_headImageView;
    CDUnknownBlockType _onViewMsgContent;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onViewMsgContent; // @synthesize onViewMsgContent=_onViewMsgContent;
@property(nonatomic) _Bool isFakeContact; // @synthesize isFakeContact=_isFakeContact;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
- (id)genHeadImageViewWithContract:(id)arg1;
- (void)updateWithContact:(id)arg1 showArrow:(_Bool)arg2 showLine:(_Bool)arg3;
- (void)layoutSubviews;

@end

