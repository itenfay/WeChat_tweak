//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, NSString, UILabel, WCFinderContact, WCFinderHeadImageView;

@interface MMFinderHeaderInfoView : UIView
{
    WCFinderContact *_finderContact;
    WCFinderHeadImageView *_headerImageView;
    UILabel *_nicknameLabel;
    MMWebImageView *_authorizedIconView;
    UILabel *_secondaryLabel;
    CDUnknownBlockType _headerImageDidUpdateBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType headerImageDidUpdateBlock; // @synthesize headerImageDidUpdateBlock=_headerImageDidUpdateBlock;
@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) MMWebImageView *authorizedIconView; // @synthesize authorizedIconView=_authorizedIconView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) WCFinderContact *finderContact; // @synthesize finderContact=_finderContact;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)arg1 image:(id)arg2 urlString:(id)arg3;
- (void)layoutSubviews;
- (void)updateFinderContact:(id)arg1;
- (id)initWithFinderContact:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

