//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIView, VoIPMPUIToastTemporaryView;

@interface VoIPMPUIToastController : NSObject
{
    UIView *_view;
    VoIPMPUIToastTemporaryView *_currentTemporaryView;
    CDUnknownBlockType _blockDelay;
}

+ (double)contentViewHeight;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType blockDelay; // @synthesize blockDelay=_blockDelay;
@property(retain, nonatomic) VoIPMPUIToastTemporaryView *currentTemporaryView; // @synthesize currentTemporaryView=_currentTemporaryView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (id)init;
- (void)showContent:(id)arg1 displayDuration:(double)arg2;
- (void)clearCurrentTemporaryViewAfterDuration:(double)arg1;

@end

