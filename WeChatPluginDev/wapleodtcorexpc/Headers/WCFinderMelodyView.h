//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIImageView;
@protocol WCFinderMelodyViewDelegate;

@interface WCFinderMelodyView : UIView
{
    id <WCFinderMelodyViewDelegate> _delegate;
    UIImageView *_melodyIconView;
    double _iconWid;
    UIColor *_iconColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(nonatomic) double iconWid; // @synthesize iconWid=_iconWid;
@property(retain, nonatomic) UIImageView *melodyIconView; // @synthesize melodyIconView=_melodyIconView;
@property(nonatomic) __weak id <WCFinderMelodyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1 defaultPlay:(_Bool)arg2 iconWid:(double)arg3 iconColor:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

