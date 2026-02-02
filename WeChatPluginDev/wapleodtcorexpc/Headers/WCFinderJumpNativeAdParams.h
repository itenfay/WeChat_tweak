//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderJumpNativeAdParams : NSObject
{
    _Bool _noStore;
    _Bool _preLoad;
    unsigned long long _canvasId;
    NSString *_uxinfo;
    NSString *_canvasDynamicInfo;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *canvasDynamicInfo; // @synthesize canvasDynamicInfo=_canvasDynamicInfo;
@property(nonatomic) _Bool preLoad; // @synthesize preLoad=_preLoad;
@property(nonatomic) _Bool noStore; // @synthesize noStore=_noStore;
@property(copy, nonatomic) NSString *uxinfo; // @synthesize uxinfo=_uxinfo;
@property(nonatomic) unsigned long long canvasId; // @synthesize canvasId=_canvasId;

@end

