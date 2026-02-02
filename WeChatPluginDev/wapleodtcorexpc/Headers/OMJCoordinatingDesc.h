//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMJCoordinatingDesc : NSObject
{
    unsigned long long _canvasOriginType;
    struct CGSize _canvasSize;
}

@property(readonly, nonatomic) unsigned long long canvasOriginType; // @synthesize canvasOriginType=_canvasOriginType;
@property(readonly, nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
- (id)initWithCanvasSize:(struct CGSize)arg1 canvasOriginType:(unsigned long long)arg2;

@end

