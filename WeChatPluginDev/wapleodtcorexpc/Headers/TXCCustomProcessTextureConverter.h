//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TXCCustomProcessTextureConverter : NSObject
{
}

- (id)outputVideoFrameFromDstVideoFrame:(id)arg1 withTexture:(id)arg2;
- (id)dstVideoFrameFromTexture:(id)arg1 pts:(unsigned int)arg2;
- (id)srcVideoFrameFromVideoFrame:(id)arg1;
- (_Bool)needsYuvInput;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

