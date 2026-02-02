//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class SeePeopleNearbyViewController;

@interface WCFinderLifeHomeNearByPeopleHostView : UIView
{
    _Bool _alreadyCheckLBS;
    SeePeopleNearbyViewController *_seePeopleVC;
    struct UIEdgeInsets _edgeInsets;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool alreadyCheckLBS; // @synthesize alreadyCheckLBS=_alreadyCheckLBS;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(retain, nonatomic) SeePeopleNearbyViewController *seePeopleVC; // @synthesize seePeopleVC=_seePeopleVC;
- (void)ensureVC;
- (void)cleanup;

@end

