//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveBatchRewardWeVisionRenderTask : NSObject
{
    _Bool _started;
    unsigned int _animationImgNum;
    long long _renderScriptId;
    NSString *_rewardProductId;
    NSString *_comboId;
    NSString *_resourceId;
    NSString *_animationImgPath;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) NSString *animationImgPath; // @synthesize animationImgPath=_animationImgPath;
@property(nonatomic) unsigned int animationImgNum; // @synthesize animationImgNum=_animationImgNum;
@property(retain, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(retain, nonatomic) NSString *comboId; // @synthesize comboId=_comboId;
@property(retain, nonatomic) NSString *rewardProductId; // @synthesize rewardProductId=_rewardProductId;
@property(nonatomic) long long renderScriptId; // @synthesize renderScriptId=_renderScriptId;

@end

