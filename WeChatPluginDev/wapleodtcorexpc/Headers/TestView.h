//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class MBExternalViewStub;

@interface TestView : UIImageView
{
    MBExternalViewStub *_viewStub;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MBExternalViewStub *viewStub; // @synthesize viewStub=_viewStub;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

