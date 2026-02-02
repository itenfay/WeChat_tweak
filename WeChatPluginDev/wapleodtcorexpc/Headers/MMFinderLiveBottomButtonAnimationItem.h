//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveButtonAnimationInfo, NSString;

@interface MMFinderLiveBottomButtonAnimationItem : NSObject
{
    unsigned int _countdownSeconds;
    FinderLiveButtonAnimationInfo *_animationInfo;
    NSString *_localFilePath;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int countdownSeconds; // @synthesize countdownSeconds=_countdownSeconds;
@property(retain, nonatomic) NSString *localFilePath; // @synthesize localFilePath=_localFilePath;
@property(retain, nonatomic) FinderLiveButtonAnimationInfo *animationInfo; // @synthesize animationInfo=_animationInfo;
- (id)initWithAnimationInfo:(id)arg1;

@end

