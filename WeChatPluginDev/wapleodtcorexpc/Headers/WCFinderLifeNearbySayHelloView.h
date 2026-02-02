//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMSayHelloButton;
@protocol WCFinderLifeNearbySayHelloViewDelegate;

@interface WCFinderLifeNearbySayHelloView : UIView
{
    id <WCFinderLifeNearbySayHelloViewDelegate> _delegate;
    MMSayHelloButton *_sayHelloBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMSayHelloButton *sayHelloBtn; // @synthesize sayHelloBtn=_sayHelloBtn;
@property(nonatomic) __weak id <WCFinderLifeNearbySayHelloViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clickBtn;
- (void)layoutSubviews;
- (void)setupSubview;
- (id)initWithFrame:(struct CGRect)arg1;

@end

