//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, NSArray, NSMutableArray, NSString;
@protocol WCCanvasHalfRandomSubCardBulletCommentsViewDelegate;

@interface WCCanvasHalfRandomSubCardBulletCommentsView : UIView
{
    id <WCCanvasHalfRandomSubCardBulletCommentsViewDelegate> _delegate;
    NSString *_title;
    NSArray *_bulletComments;
    MMUILabel *_titleLabel;
    NSMutableArray *_bulletCommentViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *bulletCommentViews; // @synthesize bulletCommentViews=_bulletCommentViews;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *bulletComments; // @synthesize bulletComments=_bulletComments;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <WCCanvasHalfRandomSubCardBulletCommentsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (int)fetchCanvasFinderCommentScene;
- (id)fetchCanvasItemCardId;
- (id)fetchCanvasPageId;
- (void)onBulletCommentButtonClicked:(id)arg1;
- (void)generateBulletCommentViews;
- (void)layoutSubviews;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 bulletComments:(id)arg3 delegate:(id)arg4;

@end

