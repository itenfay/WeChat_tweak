//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TAVVideoCompositionRenderInfo : NSObject
{
    struct CGSize _renderSize;
    CDStruct_1b6d18a9 _time;
    CDStruct_e83c9415 _timeRange;
}

@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) struct CGSize renderSize; // @synthesize renderSize=_renderSize;
@property(nonatomic) CDStruct_1b6d18a9 time; // @synthesize time=_time;

@end

