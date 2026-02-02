//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface WCFinderObseverViewHiddenView : UIView
{
    NSMutableArray *_observedViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *observedViews; // @synthesize observedViews=_observedViews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onSubviewHiddenChanged:(id)arg1;
- (void *)observerKey;
- (void)willRemoveSubview:(id)arg1;
- (void)addSubview:(id)arg1;
- (_Bool)ignoreView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

