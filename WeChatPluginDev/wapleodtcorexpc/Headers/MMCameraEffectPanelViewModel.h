//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;
@protocol MMCameraEffectPanelViewModelDelegate;

@interface MMCameraEffectPanelViewModel : NSObject
{
    id <MMCameraEffectPanelViewModelDelegate> _delegate;
    NSArray *_funnyInfos;
}

+ (unsigned long long)templateSceneWithCaptureScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *funnyInfos; // @synthesize funnyInfos=_funnyInfos;
@property(nonatomic) __weak id <MMCameraEffectPanelViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getTemplateScene;
- (void)fetchFunnyInfoWithShortURL:(id)arg1;
- (void)fetchFunnyInfosWithFinderUserName:(id)arg1 params:(id)arg2;

@end

