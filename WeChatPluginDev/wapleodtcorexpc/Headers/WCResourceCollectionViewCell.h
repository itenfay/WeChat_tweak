//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, ResourceMsgImageSquareThumbView, SimpleChatLogInfo;
@protocol WCResourceCollectionViewCellDelegate;

@interface WCResourceCollectionViewCell : UICollectionViewCell
{
    NSString *_sectionTtile;
    SimpleChatLogInfo *_msgInfo;
    ResourceMsgImageSquareThumbView *_thumbView;
    id <WCResourceCollectionViewCellDelegate> _delegate;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCResourceCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ResourceMsgImageSquareThumbView *thumbView; // @synthesize thumbView=_thumbView;
@property(retain, nonatomic) SimpleChatLogInfo *msgInfo; // @synthesize msgInfo=_msgInfo;
@property(retain, nonatomic) NSString *sectionTtile; // @synthesize sectionTtile=_sectionTtile;
- (void)onClickMsgSquareThumb:(id)arg1;
- (void)updateWithMsgInfo:(id)arg1 withSize:(struct CGSize)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1;
- (_Bool)selected;
- (_Bool)isSelected;

@end

