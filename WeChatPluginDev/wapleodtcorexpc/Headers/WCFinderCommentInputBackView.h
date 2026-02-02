//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class WCFinderMemberCommentInputAreaTipsView;

@interface WCFinderCommentInputBackView : UIView
{
    unsigned long long _displayMode;
    WCFinderMemberCommentInputAreaTipsView *_membershipTipsView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMemberCommentInputAreaTipsView *membershipTipsView; // @synthesize membershipTipsView=_membershipTipsView;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
- (void)updateWithDisplayMode:(unsigned long long)arg1;
- (void)layoutSubviews;

@end

