//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MMLivePivotSkeletonComponentView, NSArray, UIView;

@interface MMLivePivotSkeletonView : UICollectionReusableView
{
    _Bool _animate;
    UIView *_headerLine;
    MMLivePivotSkeletonComponentView *_avatar;
    MMLivePivotSkeletonComponentView *_nickname;
    NSArray *_navigationButtons;
    MMLivePivotSkeletonComponentView *_onlineUsers;
    NSArray *_bullets;
    UIView *_commentLine;
    NSArray *_commentItems;
    UIView *_operationsLine;
    MMLivePivotSkeletonComponentView *_commentBox;
    NSArray *_operationButtons;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *operationButtons; // @synthesize operationButtons=_operationButtons;
@property(retain, nonatomic) MMLivePivotSkeletonComponentView *commentBox; // @synthesize commentBox=_commentBox;
@property(retain, nonatomic) UIView *operationsLine; // @synthesize operationsLine=_operationsLine;
@property(retain, nonatomic) NSArray *commentItems; // @synthesize commentItems=_commentItems;
@property(retain, nonatomic) UIView *commentLine; // @synthesize commentLine=_commentLine;
@property(retain, nonatomic) NSArray *bullets; // @synthesize bullets=_bullets;
@property(retain, nonatomic) MMLivePivotSkeletonComponentView *onlineUsers; // @synthesize onlineUsers=_onlineUsers;
@property(retain, nonatomic) NSArray *navigationButtons; // @synthesize navigationButtons=_navigationButtons;
@property(retain, nonatomic) MMLivePivotSkeletonComponentView *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) MMLivePivotSkeletonComponentView *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) UIView *headerLine; // @synthesize headerLine=_headerLine;
@property(nonatomic) _Bool animate; // @synthesize animate=_animate;
- (void)layoutCommentLineComponents;
- (void)layoutOperationsLineComponents;
- (void)layoutHeaderLineComponents;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

