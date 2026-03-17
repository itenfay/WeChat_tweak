//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel;

@interface MMLimitedModeSecondVerifyViewController : NSObject
{
    MMUILabel *m_descLabel;
    long long _scene;
}

@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (void)onVerifyPasswordFail;
- (void)onVerifyPasswordSuccess:(id)arg1;
- (void)viewDidLoad;

@end

