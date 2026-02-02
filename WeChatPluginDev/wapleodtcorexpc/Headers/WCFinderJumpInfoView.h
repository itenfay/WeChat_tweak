//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderJumpInfo_Style, NSString, WCFinderJumpInfo;
@protocol WCFinderJumpInfoViewBaseDelegate;

@interface WCFinderJumpInfoView : UIView
{
    int _showPosition;
    id <WCFinderJumpInfoViewBaseDelegate> _delegate;
    WCFinderJumpInfo *_jumpInfo;
    FinderJumpInfo_Style *_style;
}

+ (_Bool)shouldHiddenJumpInfoView:(id)arg1 playPos:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) int showPosition; // @synthesize showPosition=_showPosition;
@property(retain, nonatomic) FinderJumpInfo_Style *style; // @synthesize style=_style;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) __weak id <WCFinderJumpInfoViewBaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

