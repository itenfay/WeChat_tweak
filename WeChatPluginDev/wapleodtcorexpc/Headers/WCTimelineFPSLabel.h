//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UILabel.h>

@class NSString, UIFont;

@interface WCTimelineFPSLabel : UILabel
{
    UIFont *_mainfont;
    UIFont *_subFont;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *subFont; // @synthesize subFont=_subFont;
@property(retain, nonatomic) UIFont *mainfont; // @synthesize mainfont=_mainfont;
- (id)observerIdentifier;
- (void)onTick:(float)arg1;
- (void)updateFps:(float)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

