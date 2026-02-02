//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMJRenderingParams : NSObject
{
    _Bool _enableHDR;
    _Bool _enablePrefetchSeqGen;
}

@property(readonly, nonatomic) _Bool enablePrefetchSeqGen; // @synthesize enablePrefetchSeqGen=_enablePrefetchSeqGen;
@property(readonly, nonatomic) _Bool enableHDR; // @synthesize enableHDR=_enableHDR;
- (id)initWithEnableHDR:(_Bool)arg1 enablePrefetchSeqGen:(_Bool)arg2;
- (id)initWithEnableHDR:(_Bool)arg1;

@end

