//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WCEditImagePenTraceMgr : NSObject
{
    NSMutableArray *_penTraceViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *penTraceViews; // @synthesize penTraceViews=_penTraceViews;
- (void)_playShockIfNeeded;
- (void)setPenTraceHighLight:(_Bool)arg1 withIndex:(id)arg2;
- (void)setPenTraceHidden:(_Bool)arg1 withIndex:(id)arg2;
- (id)getHighLightPenTraceIndex;
- (_Bool)highLightPenTraceAtPointIfNeeded:(struct CGPoint)arg1;
- (_Bool)hasPenTrace;
- (_Bool)isTracesContainAPoint:(struct CGPoint)arg1;
- (void)reAddATraceView:(id)arg1;
- (void)removeATraceView:(id)arg1;
- (void)addTraceView:(id)arg1;
- (id)genAndAddAPenDrawViewWithLayer:(id)arg1;

@end

