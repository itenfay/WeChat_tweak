//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, NSString, UILabel;

@interface WCFinderSearchEventTableViewCell
{
    UILabel *_eventNameLabel;
    UILabel *_participateNumLabel;
    MMWebImageView *_coverImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UILabel *participateNumLabel; // @synthesize participateNumLabel=_participateNumLabel;
@property(retain, nonatomic) UILabel *eventNameLabel; // @synthesize eventNameLabel=_eventNameLabel;
- (void)onLoadImageOK:(id)arg1;
- (void)updateLayout;
- (void)updateWithEventInfo:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

