//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAAppBrandNotifyLoadingImgInfo : NSObject
{
    NSString *_loadingImgUrl;
    NSString *_loadingImgProgressbarColor;
}

+ (void)initialize;
+ (void)PBArrayAdd_loadingImgProgressbarColor;
+ (void)PBArrayAdd_loadingImgUrl;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *loadingImgProgressbarColor; // @synthesize loadingImgProgressbarColor=_loadingImgProgressbarColor;
@property(retain, nonatomic) NSString *loadingImgUrl; // @synthesize loadingImgUrl=_loadingImgUrl;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

