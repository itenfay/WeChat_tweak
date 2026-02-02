//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TXCVideoFrameCoords;

@interface TXCRenderFrameCoords : NSObject
{
    TXCVideoFrameCoords *_frameCoords;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TXCVideoFrameCoords *frameCoords; // @synthesize frameCoords=_frameCoords;
- (float *)texcoordVertexAtIndex:(unsigned long long)arg1;
- (unsigned long long)texcoordVertexCount;
- (float *)positionVertexBytes;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

