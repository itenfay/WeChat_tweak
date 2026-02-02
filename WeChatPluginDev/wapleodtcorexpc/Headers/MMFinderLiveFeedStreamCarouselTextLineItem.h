//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMFinderLiveFeedStreamCarouselTextLineItem
{
    _Bool _hideTitle;
    _Bool _showHardAdLogo;
    NSString *_title;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool showHardAdLogo; // @synthesize showHardAdLogo=_showHardAdLogo;
@property(nonatomic) _Bool hideTitle; // @synthesize hideTitle=_hideTitle;
@property(readonly, copy) NSString *description;
- (id)itemIdentifier;
@property(readonly, nonatomic) unsigned long long uiStyle;
@property(readonly, nonatomic) unsigned long long duration;
@property(readonly, nonatomic) unsigned long long type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

