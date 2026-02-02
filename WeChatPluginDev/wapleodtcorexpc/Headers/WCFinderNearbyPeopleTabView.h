//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UILabel;
@protocol WCFinderTabViewDelegate;

@interface WCFinderNearbyPeopleTabView : UIView
{
    id <WCFinderTabViewDelegate> delegate;
    UILabel *_titleLabel;
    NSString *_bindPath;
    UIView *_redDotView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *redDotView; // @synthesize redDotView=_redDotView;
@property(copy, nonatomic) NSString *bindPath; // @synthesize bindPath=_bindPath;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <WCFinderTabViewDelegate> delegate; // @synthesize delegate;
- (void)processRedDotView;
- (void)finderRedDotDataRevokedWithPathKey:(id)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)setBindRedDotPath:(id)arg1;
- (void)updateForState:(unsigned long long)arg1;
- (void)sizeToFit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

