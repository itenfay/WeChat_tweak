//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class UIButton, UILabel, UITextField;

@interface WeVisDebugViewController : UIViewController
{
    _Bool _enableGPUSegment;
    UILabel *_voipSegmentGPU;
    UITextField *_modelPathSearch;
    UIButton *_searchModelPathBtn;
    UILabel *_modelPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *modelPath; // @synthesize modelPath=_modelPath;
@property(retain, nonatomic) UIButton *searchModelPathBtn; // @synthesize searchModelPathBtn=_searchModelPathBtn;
@property(retain, nonatomic) UITextField *modelPathSearch; // @synthesize modelPathSearch=_modelPathSearch;
@property(retain, nonatomic) UILabel *voipSegmentGPU; // @synthesize voipSegmentGPU=_voipSegmentGPU;
@property(nonatomic) _Bool enableGPUSegment; // @synthesize enableGPUSegment=_enableGPUSegment;

@end

