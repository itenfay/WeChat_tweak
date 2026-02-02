//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderJumpInfo_Style, FinderLocation, NSString, WCFinderJumpInfo, WCFinderLBSCardContentView;
@protocol WCFinderJumpInfoLBSCardViewDelegate;

@interface WCFinderJumpInfoLBSCardView : UIView
{
    int _showPosition;
    id <WCFinderJumpInfoLBSCardViewDelegate> _delegate;
    WCFinderLBSCardContentView *_cardContent;
    FinderJumpInfo_Style *_style;
    WCFinderJumpInfo *_jumpInfo;
    FinderLocation *_locationInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLocation *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) int showPosition; // @synthesize showPosition=_showPosition;
@property(retain, nonatomic) FinderJumpInfo_Style *style; // @synthesize style=_style;
@property(retain, nonatomic) WCFinderLBSCardContentView *cardContent; // @synthesize cardContent=_cardContent;
@property(nonatomic) __weak id <WCFinderJumpInfoLBSCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)lbsCardSetupFavButtonReport:(id)arg1;
- (void)lbsCardLayoutHeightChanged;
- (void)lbsCardDidClickCard;
- (void)lbsCardChangeFavState:(_Bool)arg1;
- (void)layoutSubviews;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

