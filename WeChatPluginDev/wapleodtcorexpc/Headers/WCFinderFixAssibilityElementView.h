//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@protocol WCFinderFixAssibilityElementViewDelegate;

@interface WCFinderFixAssibilityElementView : UIView
{
    id <WCFinderFixAssibilityElementViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderFixAssibilityElementViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityElements;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

@end

