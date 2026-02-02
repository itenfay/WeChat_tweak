//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@protocol WCFinderLiveStarterBaseViewDelegate;

@interface WCFinderLiveStarterBaseView : UIView
{
    id <WCFinderLiveStarterBaseViewDelegate> _actionDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderLiveStarterBaseViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

