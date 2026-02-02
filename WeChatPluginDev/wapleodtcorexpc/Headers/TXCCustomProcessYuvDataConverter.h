//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableData, NSString;

@interface TXCCustomProcessYuvDataConverter : NSObject
{
    unsigned long long _format;
    struct __CVBuffer *_dstBuffer;
    NSMutableData *_srcData;
    NSMutableData *_dstData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableData *dstData; // @synthesize dstData=_dstData;
@property(retain, nonatomic) NSMutableData *srcData; // @synthesize srcData=_srcData;
@property(nonatomic) struct __CVBuffer *dstBuffer; // @synthesize dstBuffer=_dstBuffer;
@property(readonly, nonatomic) unsigned long long format; // @synthesize format=_format;
- (struct __CVBuffer *)createBufferIfNeeded:(struct __CVBuffer *)arg1 forSize:(struct CGSize)arg2;
- (id)outputVideoFrameFromDstVideoFrame:(id)arg1 withTexture:(id)arg2;
- (id)dstVideoFrameFromTexture:(id)arg1 pts:(unsigned int)arg2;
- (id)srcVideoFrameFromVideoFrame:(id)arg1;
- (_Bool)needsYuvInput;
- (id)initWithFormat:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

