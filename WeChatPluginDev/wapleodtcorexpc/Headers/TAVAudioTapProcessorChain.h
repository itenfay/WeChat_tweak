//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface TAVAudioTapProcessorChain : NSObject
{
    NSArray *_nodes;
    struct AudioStreamBasicDescription _processingFormat;
}

- (void).cxx_destruct;
@property(nonatomic) struct AudioStreamBasicDescription processingFormat; // @synthesize processingFormat=_processingFormat;
@property(copy, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)processTimeRange:(CDStruct_e83c9415)arg1 bufferListInOut:(struct AudioBufferList *)arg2;
- (void)prepareProcess:(const struct AudioStreamBasicDescription *)arg1;
- (id)init;

@end

